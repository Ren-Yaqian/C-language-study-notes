import java.util.Arrays;

public class MyArrayList implements MyList {
    private Integer[] array;
    private int size;

    public MyArrayList() {
        array = new Integer[16];
        size = 0;
    }

    // 数据规模 n 指的是？    元素个数（size）
    // 时间复杂度 O(1)
    @Override
    public boolean add(Integer e) {
        // TODO: 暂时先不考虑容量不足的情况

        array[size] = e;    // 尾插，放入元素  // O(1)  内存的随机访问就是 O(1)
                            // RAM  Random Access Memory
        size++;             // O(1)

        return true;
    }

    // 时间复杂度 O(n)
    @Override
    public void add(int index, Integer e) {
        // TODO: 暂时先不考虑容量不足的情况

        // 1. 判断 index 是否合法
        if (index < 0 || index > size()) {
            // 下标不合法
            throw new ArrayIndexOutOfBoundsException("Index: " + index + ", Size: " + size);
        }

        // 2. 进行插入，[index, size) 所有元素向后移一格
        for (int from = size - 1; from >= index; from--) {
            int to = from + 1;
            array[to] = array[from];
        }
        // 作业: 如果以 to 作为循环的坐标，代码怎么写？
        // 3. 把元素放入 index 位置
        array[index] = e;
        // 4. size 增加 1
        size++;
    }

    // O(n)
    @Override
    public Integer remove(int index) {
        // 1. 先考虑 index 是否合法
        if (index < 0 || index >= size()) {
            throw new ArrayIndexOutOfBoundsException("Index: " + index + ", Size: " + size);
        }
        // 2. 需要再考虑顺序表是否为 Empty 的情况么？
        // 不需要。如果是 Empty，说明 size == 0，上面的 index 判断就不存在正确情况

        Integer e = array[index];
        // 1. 把 [index + 1, size - 1] 的元素，往前移一格
        for (int from = index + 1; from < size; from++) {
            int to = from - 1;
            array[to] = array[from];
        }
        // 2. 把 [size - 1] 置为 null
        array[size - 1] = null;
        // 3. size 减一
        size--;

        // 返回原来位置的元素
        return e;
    }

    @Override
    public boolean remove(Integer e) {
        return false;
    }

    // O(1)
    @Override
    public Integer get(int index) {
        // 1. 先考虑 index 是否合法
        if (index < 0 || index >= size()) {
            throw new ArrayIndexOutOfBoundsException("Index: " + index + ", Size: " + size);
        }
        return array[index];
    }

    // O(1)
    @Override
    public Integer set(int index, Integer e) {
        // 1. 先考虑 index 是否合法
        if (index < 0 || index >= size()) {
            throw new ArrayIndexOutOfBoundsException("Index: " + index + ", Size: " + size);
        }

        Integer oldE = array[index];
        array[index] = e;
        return oldE;
    }

    // O(n)
    @Override
    public boolean contains(Integer e) {
        return indexOf(e) >= 0;
    }

    // O(n)
    @Override
    public int indexOf(Integer e) {
        // 顺序表的有序 —— 元素和元素之间有次序
        // 并不意味着，元素是按照从小到大或者从大到小来排好序的
        // 所以不能用二分查找，只能遍历查找
        for (int i = 0; i < size; i++) {
            if (e.equals(array[i])) {   // 使用的是 equals 进行比较
                return i;
            }
        }

        return -1;
    }

    // O(n)
    @Override
    public int lastIndexOf(Integer e) {
        for (int i = size - 1; i >= 0; i--) {
            if (e.equals(array[i])) {
                return i;
            }
        }

        return -1;
    }

    @Override
    public void clear() {
        Arrays.fill(array, null);
        size = 0;
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public boolean isEmpty() {
        return size == 0;
    }
}
