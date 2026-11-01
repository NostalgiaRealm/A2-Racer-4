
/* ==== FUN_00406f70 @ 00406f70 ==== 
 * signature: bool __thiscall FUN_00406f70(void * this, int param_1)
 * body: 00406f70-00406fa7
 */

bool __thiscall FUN_00406f70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_004a8c50(param_1 * 0xf0 + DAT_00715e50);
  iVar2 = 0;
  piVar3 = (int *)((int)this + 0x10);
  do {
    if (iVar1 == *piVar3) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
  } while (iVar2 < 10);
  return iVar2 != 10;
}


