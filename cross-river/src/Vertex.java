/**
 * <p>
 *     顶点类对象，保存顶点对象的状态及输出信息
 *     状态选值为0和1，其中0代表在河此岸，1代表在河
 *     对岸。例如：初始状态为(0,0,0,0)，即全在河此岸
 * </p>
 * @author mohe
 */
public class Vertex {

    private Integer manStatus;            //人的状态
    private Integer wolfStatus;           //狼的状态
    private Integer sheepStatus;          //羊的状态
    private Integer vegetableStatus;      //菜的状态
    private String statusMessage;         //对象状态信息描述

    /**
     * 全参构造函数，初始化顶点对象
     * @param manStatus     人的状态
     * @param wolfStatus    狼的状态
     * @param sheepStatus   羊的状态
     * @param vegetableStatus   菜的状态
     * @param statusMessage 对象状态信息描述
     */
    public Vertex(Integer manStatus, Integer wolfStatus, Integer sheepStatus, Integer vegetableStatus,
                  String statusMessage) {
        this.manStatus = manStatus;
        this.wolfStatus = wolfStatus;
        this.sheepStatus = sheepStatus;
        this.vegetableStatus = vegetableStatus;
        this.statusMessage = statusMessage;
    }

/*------------------getter and setter start------------------------------*/
    public Integer getManStatus() {
        return manStatus;
    }

    public void setManStatus(Integer manStatus) {
        this.manStatus = manStatus;
    }

    public Integer getWolfStatus() {
        return wolfStatus;
    }

    public void setWolfStatus(Integer wolfStatus) {
        this.wolfStatus = wolfStatus;
    }

    public Integer getSheepStatus() {
        return sheepStatus;
    }

    public void setSheepStatus(Integer sheepStatus) {
        this.sheepStatus = sheepStatus;
    }

    public Integer getVegetableStatus() {
        return vegetableStatus;
    }

    public void setVegetableStatus(Integer vegetableStatus) {
        this.vegetableStatus = vegetableStatus;
    }

    public String getStatusMessage() {
        return statusMessage;
    }

    public void setStatusMessage(String statusMessage) {
        this.statusMessage = statusMessage;
    }
/*------------------getter and setter end------------------------------*/
}
