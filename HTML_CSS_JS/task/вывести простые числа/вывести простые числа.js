"use strict";
// Натуральное число, большее 1, называется простым, если оно ни на что не делится, кроме себя и 1.
// Другими словами, n > 1 – простое, если при его делении на любое число кроме 1 и n есть остаток.
// Например, 5 это простое число, оно не может быть разделено без остатка на 2, 3 и 4.
// Напишите код, который выводит все простые числа из интервала от 2 до n.
// Для n = 10 результат должен быть 2,3,5,7.
// P.S. Код также должен легко модифицироваться для любых других интервалов.


//2, 3, 5, 7, 11, 13, 17

let UserNumber = +prompt('Введите число!', 10);// n
for (let AscendingNumber = Number(2); AscendingNumber < UserNumber; AscendingNumber++) {
    for (let Verification = Number(2); Verification <= AscendingNumber; Verification++) {
        if (AscendingNumber != Verification) {
            if (AscendingNumber % Verification == 0) {
                break;
            }
        }
        if (AscendingNumber == Verification) {
            console.log(AscendingNumber);
        }
    }
    
}
