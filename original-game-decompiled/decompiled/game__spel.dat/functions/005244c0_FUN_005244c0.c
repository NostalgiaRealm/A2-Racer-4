
/* ==== FUN_005244c0 @ 005244c0 ==== 
 * signature: undefined4 __cdecl FUN_005244c0(int param_1, int * param_2)
 * body: 005244c0-00524543
 */

undefined4 __cdecl FUN_005244c0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((&DAT_0074d338)[(byte)(&DAT_0074cde0)[param_1]] == '\0') {
    param_1 = param_1 + 1;
  }
  if (param_1 < DAT_0074d508) {
    do {
      if ((&DAT_0074d338)[(byte)(&DAT_0074cde0)[param_1]] == '\0') {
        *param_2 = param_1;
        return uVar2;
      }
      iVar1 = FUN_00524550((uint)(byte)(&DAT_0074cde0)[param_1]);
      if ((iVar1 == 0) && ((&DAT_0074d3fa)[(byte)(&DAT_0074cde0)[param_1]] == '\0')) {
        uVar2 = 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < DAT_0074d508);
    *param_2 = param_1;
    return uVar2;
  }
  *param_2 = param_1;
  return 0;
}


