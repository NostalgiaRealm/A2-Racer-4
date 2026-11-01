
/* ==== FUN_00407d20 @ 00407d20 ==== 
 * signature: int __cdecl FUN_00407d20(int param_1, int param_2)
 * body: 00407d20-00407d82
 */

int __cdecl FUN_00407d20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00715f04 / 2;
  if ((float10)iVar1 < ABS((float10)(param_1 - param_2))) {
    if ((param_1 < iVar1) && (iVar1 < param_2)) {
      return (DAT_00715f04 - param_2) + param_1;
    }
    if ((iVar1 < param_1) && (param_2 < iVar1)) {
      return (param_1 - DAT_00715f04) - param_2;
    }
  }
  return param_1 - param_2;
}


