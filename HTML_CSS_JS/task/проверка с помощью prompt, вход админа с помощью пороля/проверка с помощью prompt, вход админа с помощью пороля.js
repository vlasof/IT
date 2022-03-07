"use strict";



let user = prompt('Кто там?');
let porol = '';
if (user == '' || user == null) alert('Отменено');
else if(user == 'Админ' || user == 'админ') porol = prompt('Пороль?');
else alert('Я вас не знаю');

if (user == 'Админ' || user == 'админ') {
    if (porol == '' || user == null) alert('Отменено');
    else if (porol == 'Я Главный' || porol == 'я главный') alert('Здравствуйте!');
    else alert('Пороль не верный');
}
