Action()
{

	web_url("index.php", 
		"URL=http://192.168.99.100:8181/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/skins/header-red.jpg", ENDITEM, 
		LAST);

	lr_think_time(10);

	lr_start_transaction("login");

	web_submit_form("index.php_2", 
		"Snapshot=t34.inf", 
		ITEMDATA, 
		"Name=user", "Value=admin", ENDITEM, 
		"Name=pass", "Value=admin", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_think_time(8);

	web_link("Добавить контакт", 
		"Text=Добавить контакт", 
		"Snapshot=t35.inf", 
		LAST);

	web_submit_form("edit.php", 
		"Snapshot=t36.inf", 
		ITEMDATA, 
		"Name=address", "Value=", ENDITEM, 
		"Name=quickadd", "Value=NEXT", ENDITEM, 
		LAST);

	lr_think_time(10);

	lr_start_transaction("add");

	web_submit_form("edit.php_2", 
		"Snapshot=t37.inf", 
		ITEMDATA, 
		"Name=firstname", "Value={firstname}", ENDITEM, 
		"Name=middlename", "Value={middlename}", ENDITEM, 
		"Name=lastname", "Value={lastname}", ENDITEM, 
		"Name=nickname", "Value={nickname}", ENDITEM, 
		"Name=photo", "Value=", "File=Yes", ENDITEM, 
		"Name=title", "Value=111", ENDITEM, 
		"Name=company", "Value={company}", ENDITEM, 
		"Name=address", "Value={address}", ENDITEM, 
		"Name=home", "Value={home}", ENDITEM, 
		"Name=mobile", "Value={mobile}", ENDITEM, 
		"Name=work", "Value={work}", ENDITEM, 
		"Name=fax", "Value=111", ENDITEM, 
		"Name=email", "Value={email}", ENDITEM, 
		"Name=email2", "Value=", ENDITEM, 
		"Name=email3", "Value=", ENDITEM, 
		"Name=homepage", "Value=", ENDITEM, 
		"Name=bday", "Value=", ENDITEM, 
		"Name=bmonth", "Value=-", ENDITEM, 
		"Name=byear", "Value=", ENDITEM, 
		"Name=aday", "Value=", ENDITEM, 
		"Name=amonth", "Value=-", ENDITEM, 
		"Name=ayear", "Value=", ENDITEM, 
		"Name=new_group", "Value=[не выбрано]", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=phone2", "Value=", ENDITEM, 
		"Name=notes", "Value=", ENDITEM, 
		"Name=submit", "Value=Сохранить", ENDITEM, 
		EXTRARES, 
		"Url=/skins/header-red.jpg", "Referer=http://192.168.99.100:8181/index.php", ENDITEM, 
		LAST);

	lr_end_transaction("add",LR_AUTO);

	return 0;
}