import java.util.ArrayList;
import java.util.List;

/**
 * <p>
 *     Cross River Algorithm类
 *     算法主类，对用到的工具对象做如下说明：
 *          1. ArrayList为java提供的列表型数据结构对象
 *          2. Math.abs为java提供的绝对值函数
 * </p>
 *
 * @author mohe
 */
public class CRAlgorithm {

    public static int[][] adjacentMatrix = new int[10][10];    // 保存了相邻矩阵信息
    public static List<Vertex> vertexList = new ArrayList<>();  // 顶点集列表
    public static int[] visited = new int[10];      // 用来保存是否已遍历

    /**
     * 相邻矩阵初始化函数
     */
    private static void initAdjacentMatrix(){
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                adjacentMatrix[i][j] = 0;
            }
        }
    }

    /**
     * 连通两点成边函数
     */
    private static void connected(){
        for (int i = 0; i < 10; i++) {

            //获取第一个点的人狼羊菜状态
            int i_manStatus = vertexList.get(i).getManStatus();
            int i_wolfStatus = vertexList.get(i).getWolfStatus();
            int i_sheepStatus = vertexList.get(i).getSheepStatus();
            int i_vegetableStatus = vertexList.get(i).getVegetableStatus();

            for (int j = 0; j < 10; j++) {

                //获取第二个点的人狼羊菜状态
                int j_manStatus = vertexList.get(j).getManStatus();
                int j_wolfStatus = vertexList.get(j).getWolfStatus();
                int j_sheepStatus = vertexList.get(j).getSheepStatus();
                int j_vegetableStatus = vertexList.get(j).getVegetableStatus();

                /*
                   检验是否满足连通性:
                      1. 两点之间人的状态不相等
                      2. 两点之间除人外只能发生一个状态的改变
                 */
                if (i_manStatus!=j_manStatus && (Math.abs(i_wolfStatus - j_wolfStatus) +
                        Math.abs(i_sheepStatus - j_sheepStatus) +
                        Math.abs(i_vegetableStatus - j_vegetableStatus) <= 1)) {

                    //满足连通性条件，连接两点
                    adjacentMatrix[i][j] = 1;
                }
            }
        }
    }

    /*
     * 相邻矩阵遍历函数
     */
    private static void traverseAM(){
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                System.out.printf("%2d", adjacentMatrix[i][j]);
            }
            System.out.println();   // 换行
        }
    }

    /**
     * 图遍历函数
     * @param start 起始点（初始状态）
     * @param end   停止点（最终状态）
     */
    public static void dfs(int start, int end) {
        if (start == end) {
            print(end);    // 调用print()方法输出结果
            System.out.println();
        }

        for (int i = 0; i < 10; i++) {
            if (adjacentMatrix[start-1][i] > 0 && visited[i] == 0) {
                // 有边且没有被访问
                visited[i] = start;
                // 递归调用
                dfs(i+1, end);
                // 回溯时置为0
                visited[i] = 0;
            }
        }
    }

    /**
     * 结果输出函数
     * @param end 停止点
     */
    public static void print(int end) {
        // 从最后往前遍历，然后正序输出
        int[] temp = new int[10]; // 保存了倒叙输出的顺序
        int num = 0;    // num表示要输出的个数
        int i = end;    // i表示当前是第几个数
        while (i != 1) {
            // 当i不是第一个数字时，则继续往前找
            temp[num] = visited[i - 1];
            i = temp[num];
            num++;      // num加1
        }
        for (int j = num - 1; j > 0; j--) {
            System.out.println(vertexList.get(temp[j] - 1).getStatusMessage());
        }
        // 输出最终状态
        System.out.println(vertexList.get(9).getStatusMessage());
    }

    public static void main(String[] args) {

        //将所有可行状态添加进顶点集列表
        vertexList.add(new Vertex(0, 0, 0, 0, "初始状态"));
        vertexList.add(new Vertex(0, 1, 0, 0, "人羊菜 | 狼"));
        vertexList.add(new Vertex(0, 0, 1, 0, "人狼菜 | 羊"));
        vertexList.add(new Vertex(0, 0, 0, 1, "人狼羊 | 菜"));
        vertexList.add(new Vertex(1, 0, 1, 0, "狼菜 | 人羊"));
        vertexList.add(new Vertex(0, 1, 0, 1, "人羊 | 狼菜"));
        vertexList.add(new Vertex(1, 0, 1, 1, "狼 | 人羊菜"));
        vertexList.add(new Vertex(1, 1, 0, 1, "羊 | 人狼菜"));
        vertexList.add(new Vertex(1, 1, 1, 0, "菜 | 人狼羊"));
        vertexList.add(new Vertex(1, 1, 1, 1, "最终状态"));

        //初始化相邻矩阵
        initAdjacentMatrix();
        //连通点
        connected();
        //遍历相邻矩阵
        traverseAM();
        //置点1访问点1，准备开始迭代
        visited[0] = 1;
        // 开始迭代，从第一个点找最后一个点
        dfs(1, 10);
    }
}
