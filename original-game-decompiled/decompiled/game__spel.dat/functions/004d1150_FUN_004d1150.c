
/* ==== FUN_004d1150 @ 004d1150 ==== 
 * signature: int * __cdecl FUN_004d1150(int * param_1, uint param_2)
 * body: 004d1150-004d1201
 */

int * __cdecl FUN_004d1150(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_0056fa57;
  local_c = ExceptionList;
  local_4 = 2;
  if (DAT_0074db04 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db04 = DAT_0074dafc;
  }
  ExceptionList = &local_c;
  piVar2 = FUN_0054ce2d();
  iVar1 = *piVar2;
  *param_1 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(param_2 + 4) = iVar1 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(param_2 + 4) != 0) & param_2);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


