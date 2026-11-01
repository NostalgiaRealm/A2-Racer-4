
/* ==== FUN_0042e950 @ 0042e950 ==== 
 * signature: undefined __register FUN_0042e950(int * param_1, char param_2)
 * body: 0042e950-0042e977
 */

void FUN_0042e950(int *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = FUN_0042e940(param_1);
  if ((bool)param_2 != bVar1) {
    if (param_2 == '\0') {
      FUN_0042bbfc((int *)0x0);
    }
    else {
      FUN_0042bbfc(param_1);
    }
  }
  return;
}


