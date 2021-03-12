import java.util.ArrayList;
import java.util.Iterator;

public class ArrayListDemo {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("我");
        list.add("你");
        list.add("他");
        Iterable<String> r1 = list;
        
        // r1 指向的对象，具备迭代能力
        // 迭代其中的每一个元素
        
        // 1. 通过 r1 得到迭代器对象(Iterator)
        Iterator<String> it = r1.iterator();

        // 2. 利用迭代器对象，进行遍历
        System.out.println(it.hasNext()); // true
        String s1 = it.next();            // 返回 "我"，iterator 内部走到了 "你"
        System.out.println(s1);                 // 我

        System.out.println(it.hasNext()); // true
        String s2 = it.next();            // 返回 "你"，iterator 内部走到了 "他"
        System.out.println(s2);                 // 你

        System.out.println(it.hasNext()); // true
        String s3 = it.next();            // 返回 "他"，iterator 内部全部走完了
        System.out.println(s3);                 // 他

        System.out.println(it.hasNext()); // false
    }
}
