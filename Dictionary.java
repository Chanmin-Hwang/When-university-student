public class Dictionary extends PairMap{
    int itemCount = 0;
    private int outPut;
    Dictionary(int len){
        super(len);
        for (int i=0;i<len;i++){
            keyArray[i] = "";
            valueArray[i] = "";
        }
    }

    private int search(String key){
        for (int i=0;i<keyArray.length;i++){
            if (key.equals(keyArray[i])){return i;}
        }

        return -1;
    }
    @Override
    String get(String key){
        outPut = this.search(key);

        if (outPut < 0) {return null;}

        else { return valueArray[outPut];}
    }
    @Override
    void put(String key,String value){
        outPut = this.search(key);

        if (outPut < 0) {

            keyArray[itemCount] = key;

            valueArray[itemCount++] = value;
        }

        else {valueArray[outPut] = value;}
    }
    @Override
    String delete(String key){
        outPut = this.search(key);

        if (outPut < 0){return null;}

        else{
            String value = valueArray[outPut];
            keyArray[outPut] = null;
            valueArray[outPut] = null;
            itemCount--;

            return value;
        }
    }
    @Override
    int length(){return itemCount;}
}
