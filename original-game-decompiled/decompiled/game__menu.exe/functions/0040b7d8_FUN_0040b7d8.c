
/* ==== FUN_0040b7d8 @ 0040b7d8 ==== 
 * signature: undefined __register FUN_0040b7d8(void)
 * body: 0040b7d8-0040b835
 */

void FUN_0040b7d8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  undefined1 local_c;
  
  iVar1 = FUN_004028c0();
  for (iVar3 = 0; (iVar3 < 7 && (iVar1 != (&DAT_004aa210)[iVar3 * 2])); iVar3 = iVar3 + 1) {
  }
  if (iVar3 < 7) {
    piVar2 = FUN_0040b5d8((int *)&DAT_00407798,'\x01',(undefined4 *)(&DAT_004aa214)[iVar3 * 2]);
  }
  else {
    local_c = 0;
    local_10 = iVar1;
    piVar2 = (int *)FUN_0040b6d0((int)&DAT_00407798,'\x01',(undefined4 *)PTR_PTR_004ab6cc,0,
                                 &local_10);
  }
  piVar2[3] = iVar1;
  return;
}


