"use strict";

alert('привет, это пак с играми!');

menu();

function menu() {
  
  let choose = prompt( 'Выбери игру!\n\t1. Угадалка\n\t2. Считалка\n\t3. Кликалка\nДля выхода введи \"выход\"' );

  if (choose == 'Угадалка' || choose == 'угадалка' || choose == '1') {

    firstGame();

  } else if (choose == 'Считалка' || choose == 'считалка' || choose == '2') {

    secondGame();

  } else if (choose == 'Кликалка' || choose == 'кликалка' || choose == '3') {

    alert('Эта игра ещё не готова');
    menu();

  } else if (choose == 'выход' || choose == 'Выход' || choose == null) {
   
    alert('приходи ещё!');
    return false;
  
  } else {

    alert('Я не знаю такой команды :(');
    menu();
  
  }

}

function firstGame() {

  alert('Угадалка');
  alert('\tЯ случайным образом загадал число от 0 до 100.\n\tТвоя задача угадать его за минимальное количество попыток.\n\tПосле каждого твоего ввода я буду говорить больше твоё число или меньше загаданного.');
  
  let YesNo;

  while (YesNo != 'нет' || YesNo != 'Нет' || YesNo != 'НЕТ' || null) {

    let numberRandom = Math.random() * 100;
    numberRandom = Math.round(numberRandom);

    let userNumber = prompt('Попробуй угадать!');

    while (userNumber != numberRandom) {

      if (userNumber == 'выход' || userNumber == 'Выход' || userNumber == 'ВЫХОД' || userNumber == null) {

        alert(`Лааадно. В другой раз))\nВыхожу в меню.`);
        menu();

      }
                  
      if (userNumber > numberRandom) {
        userNumber = prompt(`Это число МЕНЬШЕ, чем ${userNumber}!\nЧтобы выйти напиши "выход".`);
      }

      if (userNumber < numberRandom) {
        userNumber = prompt(`Это число БОЛЬШЕ, чем ${userNumber}!\nЧтобы выйти напиши "выход".`);
      }

    }

    YesNo = prompt(`Ура!!! Ты угадал! Это было число ${numberRandom}\nПродолжим угадывать?\n\"нет\" или \"да\"`);
        
  }

  menu();
  return;
  
}

function secondGame() {
  
  alert('Считалка');
  alert('\tЯ случайным образом буду давать задания по арифметике.\n\tТвоя задача правильно решить примеры.');
  
  define();

}

function define() {
    
  let firstRandomNumber = Math.random() * 19;
  firstRandomNumber = Math.round(firstRandomNumber);
  
  let secondRandomNumber = Math.random() * 19;
  secondRandomNumber = Math.round(secondRandomNumber);
  
  let operators = 1 + (Math.random() * 2);
  operators = Math.round(operators);
  
  
  let result = +firstRandomNumber + +secondRandomNumber;
  
  if (operators == 1) {

    result = +firstRandomNumber + +secondRandomNumber;
    operators = '+';

  }

  if (operators == 2) {

    result = firstRandomNumber - secondRandomNumber;
    operators = '-';

  }

  if (operators == 3) {

    result = firstRandomNumber * secondRandomNumber;
    operators = '*';

  }
  
  let exit = true;

  exit = resultF(firstRandomNumber, operators, secondRandomNumber, result, exit);
  
  if (exit == true) {

    let resume = prompt('Продолжим решать задачки?\n\t\t\"да\" или \"нет\"');
    
    if (resume == 'нет' || resume == 'Нет' || resume == 'НЕТ' || resume == null) {
      
      alert(`Выхожу в меню.`);
      menu();
      return;
      
    }
    
    define();
    
  }

}

function resultF(firstRandomNumber, operators, secondRandomNumber, result) {
  
  let userNumber;
  
  while (userNumber != result) {

    userNumber = prompt(`Чему это равняется?\n\t[ ${firstRandomNumber} ${operators} ${secondRandomNumber} = ? ]\nЕсли это задача сложная ты можешь её пропустить \"пропустить\"`);
    
    if (userNumber == null || userNumber == 'выход'|| userNumber == 'Выход') {

      alert(`Лааадно. В другой раз))\nВыхожу в меню.`);
      menu();
      return false;

    }

    if (userNumber == 'пропустить' || userNumber == 'Пропустить' || userNumber == 'ПРОПУСТИТЬ') {

      define();
      break;
      
    }
    
    if (userNumber == result) {

      alert(`Правильно!\n\n\t${firstRandomNumber} ${operators} ${secondRandomNumber} = ${result}`);
      return true;

    } else {

      alert('Попробуй ещё раз. У тебя получится!\nЕсли хочешь выйти напиши \"выход\"');
    
    }

  }
  
}
