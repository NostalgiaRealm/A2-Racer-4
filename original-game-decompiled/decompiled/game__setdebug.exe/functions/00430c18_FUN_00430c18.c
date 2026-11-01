
/* ==== FUN_00430c18 @ 00430c18 ==== 
 * signature: undefined4 __register FUN_00430c18(int * param_1, int * param_2)
 * body: 00430c18-00430c54
 */

undefined4 FUN_00430c18(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00410af0(param_1);
  iVar2 = FUN_00410af0(param_2);
  if (iVar1 == iVar2) {
    uVar3 = FUN_00410af0(param_1);
    uVar4 = FUN_00407a5c((int *)param_1[1],(int *)param_2[1],uVar3);
    if ((char)uVar4 != '\0') {
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return 0;
}


