
/* ==== FUN_00558473 @ 00558473 ==== 
 * signature: undefined __cdecl FUN_00558473(int param_1)
 * body: 00558473-005584df
 */

void __cdecl FUN_00558473(int param_1)

{
  SIZE_T SVar1;
  int *piVar2;
  
  SVar1 = FUN_0055dfbc(DAT_007503dc);
  if (SVar1 < (uint)((int)DAT_007503d8 + (4 - (int)DAT_007503dc))) {
    SVar1 = FUN_0055dfbc(DAT_007503dc);
    piVar2 = FUN_0055a9b4(DAT_007503dc,(uint *)(SVar1 + 0x10));
    if (piVar2 == (int *)0x0) {
      return;
    }
    DAT_007503d8 = piVar2 + ((int)DAT_007503d8 - (int)DAT_007503dc >> 2);
    DAT_007503dc = piVar2;
  }
  *DAT_007503d8 = param_1;
  DAT_007503d8 = DAT_007503d8 + 1;
  return;
}


