
/* ==== FUN_00407021 @ 00407021 ==== 
 * signature: int __thiscall FUN_00407021(void * this, int param_1)
 * body: 00407021-0040702f
 */

int __thiscall FUN_00407021(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_004a8c50(param_1 * 0xf0 + DAT_00715e50);
  iVar3 = 0;
  piVar2 = (int *)((int)this + 0x10);
  do {
    if (*piVar2 == iVar1) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 6;
  } while (iVar3 < 10);
  FUN_004a6980((uint)(iVar3 != 10),(byte *)s___s___d_Given_object_is_not_a_co_00590404);
  return iVar3;
}


