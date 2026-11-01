
/* ==== FUN_00560d38 @ 00560d38 ==== 
 * signature: int __stdcall FUN_00560d38(int * param_1)
 * body: 00560d38-00560d7d
 */

int FUN_00560d38(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_0055da5c();
    return iVar3;
  }
  if ((DAT_0074dd48 != (FARPROC)0x0) &&
     (bVar2 = FUN_005655a4(DAT_0074dd48), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_0074dd48)(param_1);
    return iVar3;
  }
  return 0;
}


