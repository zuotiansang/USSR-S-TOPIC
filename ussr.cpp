#include <iostream>
#include "defunc.h"
#include "show.h"
#include <Windows.h>


int main()
{
	int pai = 800, ban = 400;
	int ting = 128;

	
	system("color 4e");
	system("title Государственный гимн СССР");

	Sleep(1000);


	
	show_infor("Государственный гимн СССР", "牢不可破的联盟");
	Beep(do1, 2 * pai);
	//-------------第一部分-------------------------
	Sleep(1000);
	show_infor("Союз нерушимый республик свободных", "牢不可破的自由共和国联盟");
	Beep(so, ban);
	Beep(do1, pai);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, pai);
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);

	
	show_infor("Сплотила навеки Великая Русь", "伟大的俄罗斯永远团结在一起");
	Beep(mi, pai);
	Beep(fa, pai);
	Beep(fa, ban);
	Beep(so, ban);
	Beep(la, pai);
	Beep(la, ban);
	Beep(sla, ban);
	Beep(si, pai);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, pai);

	Sleep(500);
	show_infor("Да здравствует созданный волей народов", "万岁，由人民意志所建立的");
	Beep(so, ban);
	Beep(mi1, pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	Beep(si, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(si, pai);

	show_infor("Единый, могучий Советский Союз", "统一的，强大的苏维埃联盟");
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);
	Beep(mi, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);

	Sleep(800);
	show_infor("Славься, Отечество наше свободное", "光荣啊，我们自由的祖国");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 * pai);
	Beep(mi, ban);
	Beep(mi, 1.5 * pai);

	Sleep(500);
	show_infor("Дружбы народов надежный оплот", "人民友谊是可靠的堡垒");
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(do1, ban);
	Beep(mi1, 1.5 * pai);

	Sleep(500);
	show_infor("Партия Ленина - сила народная", "列宁的党，人民的力量");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(la, ban);
	Beep(la, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);

	Sleep(500);
	show_infor("Нас к торжеству коммунизма ведет", "带领我们走向共产主义胜利");
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	Beep(do1, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);

	//-------------第二部分-------------------------
	Sleep(500);
	show_infor("Сквозь грозы сияло нам солнце свободы", "自由阳光穿过风暴照耀我们");
	Beep(so, ban);
	Beep(do1, pai);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, pai);
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);

	show_infor("И Ленин великий нам путь озарил", "伟大的列宁指明了未来前程");
	Beep(mi, pai);
	Beep(fa, pai);
	Beep(fa, ban);
	Beep(so, ban);
	Beep(la, pai);
	Beep(la, ban);
	Beep(sla, ban);
	Beep(si, pai);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, pai);

	Sleep(500);
	show_infor("На правое дело он поднял народы", "他因正义事业而领导人民");
	Beep(so, ban);
	Beep(mi1, pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	Beep(si, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(si, pai);

	show_infor("На труд и на подвиги нас вдохновил", "他鼓舞我们用劳动去建立功勋");
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);
	Beep(mi, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);

	Sleep(800);
	show_infor("Славься, Отечество наше свободное", "光荣啊，我们自由的祖国");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 * pai);
	Beep(mi, ban);
	Beep(mi, 1.5 * pai);

	Sleep(500);
	show_infor("Дружбы народов надежный оплот", "人民友谊是可靠的堡垒");
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(do1, ban);
	Beep(mi1, 1.5 * pai);

	Sleep(500);
	show_infor("Партия Ленина - сила народная", "列宁的党，人民的力量");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(la, ban);
	Beep(la, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);

	Sleep(500);
	show_infor("Нас к торжеству коммунизма ведет", "带领我们走向共产主义胜利");
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	Beep(do1, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	//-------------第三部分-------------------------
	Sleep(500);
	show_infor("В победе бессмертных идей коммунизма", "在不朽的共产主义理想当中");
	Beep(so, ban);
	Beep(do1, pai);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, pai);
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);

	show_infor("Мы видим грядущее нашей страны", "我们看到祖国的美好未来");
	Beep(mi, pai);
	Beep(fa, pai);
	Beep(fa, ban);
	Beep(so, ban);
	Beep(la, pai);
	Beep(la, ban);
	Beep(sla, ban);
	Beep(si, pai);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, pai);

	Sleep(500);
	show_infor("И Красному знамени славной Отчизны", "向着祖国光荣的红色旗帜");
	Beep(so, ban);
	Beep(mi1, pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	Beep(si, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(si, pai);

	show_infor("Мы будем всегда беззаветно верны", "我们将永远保持无私的忠诚");
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);
	Beep(mi, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);

	Sleep(800);
	show_infor("Славься, Отечество наше свободное", "光荣啊，我们自由的祖国");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 * pai);
	Beep(mi, ban);
	Beep(mi, 1.5 * pai);

	Sleep(500);
	show_infor("Дружбы народов надежный оплот", "人民友谊是可靠的堡垒");
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(do1, ban);
	Beep(mi1, 1.5 * pai);

	Sleep(500);
	show_infor("Партия Ленина - сила народная", "列宁的党，人民的力量");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(la, ban);
	Beep(la, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);

	Sleep(500);
	show_infor("Нас к торжеству коммунизма ведет", "带领我们走向共产主义胜利");
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	Beep(do1, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	Beep(si, pai);
	Beep(do1, 2 * pai);
	system("pause");
	
	
	return 0;
}
