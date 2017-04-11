
public class singleton {
	private static Boolean instanceFlag = false;;	//in cl.pri
	private static singleton single;
	private int stat = 0;
	private singleton(){}
	private singleton(singleton rhs){}
	public singleton _assignment(final singleton e2) {	return null;	}
	public static singleton getInstance() {
		if(! instanceFlag) {
			single = new singleton();
			instanceFlag = true;
		}
		return single;
	}
	public void method (int a) {
		if(this==single) {
			++single.stat;
			System.out.println("Called a["+a+"]["+single.stat+"] times, singletonCl_addr["+this+"]");
		}
	}
/*	public static int getStat() {
		return stat;
	}
	public static void setStat(int stat) {
		singleton.stat = stat;
	}*/
	
	/*public ~singleton() {
		instanceFlag = false;	//delete single; // closeFilesResourcesLogit  
	}*/
}
