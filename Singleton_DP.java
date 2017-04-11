
public class Singleton_DP {

	public static void main(String[] args) {
		singleton sc1, sc2;
		//sc1 = new singleton();
		sc1 = singleton.getInstance();
		//sc2 = new singleton(sc1);
		sc2 = null;
		sc1.method(1);
//		System.out.println("dangl:1["+sc1+"]2["+sc2+"]");
		//sc2 = singleton.getInstance();
		sc2.method(11101);
		System.out.println("dangl:1["+sc1+"]2["+sc2+"]");
	}

}
