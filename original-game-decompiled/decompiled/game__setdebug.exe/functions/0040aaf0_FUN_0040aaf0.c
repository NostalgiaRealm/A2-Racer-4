
/* ==== FUN_0040aaf0 @ 0040aaf0 ==== 
 * signature: undefined __register FUN_0040aaf0(void)
 * body: 0040aaf0-0040ab4d
 */

void FUN_0040aaf0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  undefined1 local_c;
  
  iVar1 = FUN_004027b8();
  for (iVar3 = 0; (iVar3 < 7 && (iVar1 != (&DAT_004461fc)[iVar3 * 2])); iVar3 = iVar3 + 1) {
  }
  if (iVar3 < 7) {
    piVar2 = FUN_0040a938((int *)&DAT_00407044,'\x01',(undefined4 *)(&DAT_00446200)[iVar3 * 2]);
  }
  else {
    local_c = 0;
    local_10 = iVar1;
    piVar2 = (int *)FUN_0040aa30((int)&DAT_00407044,'\x01',(undefined4 *)PTR_PTR_00446afc,0,
                                 &local_10);
  }
  piVar2[3] = iVar1;
  return;
}


