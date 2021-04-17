import java.util.*;
public class TestJni
{
      //声明原生函数：参数为String类型
      public native void print(String content);

      public void callback(int notify_id, int param)
	{
            System.out.println(notify_id);
            System.out.println(param);
      } 
      
      //加载本地库代码     


      static
      {
            System.loadLibrary("TestJni");
      }
}