abstract class PairMap {
    int len;
    protected String[] keyArray;
    protected String[] valueArray;

    PairMap(int len){
        this.len = len;
        keyArray = new String[len];
        valueArray = new String[len];
    }
    abstract String get(String key);
    abstract void put(String key, String value);
    abstract String delete(String key);
    abstract int length();
}
