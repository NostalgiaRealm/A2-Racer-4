
/* ==== FUN_00419120 @ 00419120 ==== 
 * signature: undefined8 __cdecl FUN_00419120(int param_1, int param_2)
 * body: 00419120-004191bf
 */

undefined8 __cdecl FUN_00419120(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  longlong lVar4;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  bVar1 = false;
  if (-1 < param_2) {
    iVar3 = DAT_00715eb8 + param_2 * 0x50;
    iVar2 = *(int *)(iVar3 + 0x14);
    if (((iVar2 < 0) && (iVar2 = *(int *)(iVar3 + 0x1c), iVar2 < 0)) &&
       (iVar2 = *(int *)(iVar3 + 0x18), iVar2 < 0)) {
      iVar2 = *(int *)(iVar3 + 0x20);
      if (iVar2 < 0) goto LAB_004191b6;
      bVar1 = true;
    }
    FUN_00422ab0(iVar2,&local_c);
    lVar4 = FUN_00403ea0(param_1,local_c,local_8,local_4);
    in_EDX = (undefined4)((ulonglong)lVar4 >> 0x20);
    iVar3 = (int)lVar4;
    iVar2 = iVar3;
    if ((bVar1) && (iVar2 = iVar3 + -0x800, iVar2 < 0)) {
      iVar2 = iVar3 + 0x800;
    }
    if ((0x3ff < iVar2) && (iVar2 < 0xc01)) {
      return CONCAT44(in_EDX,0xffffffff);
    }
  }
LAB_004191b6:
  return CONCAT44(in_EDX,1);
}


