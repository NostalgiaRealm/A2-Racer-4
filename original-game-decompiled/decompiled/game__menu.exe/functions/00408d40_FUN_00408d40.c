
/* ==== FUN_00408d40 @ 00408d40 ==== 
 * signature: undefined4 __register FUN_00408d40(char * param_1)
 * body: 00408d40-00408d69
 */

undefined4 FUN_00408d40(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar1 = FUN_00408b24(param_1);
  piVar2 = FUN_00408d20(iVar1 + 1U);
  uVar3 = FUN_00408b50(piVar2,(undefined4 *)param_1,iVar1 + 1U);
  return uVar3;
}


