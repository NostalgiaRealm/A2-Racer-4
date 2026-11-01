
/* ==== FUN_00425a40 @ 00425a40 ==== 
 * signature: undefined __thiscall FUN_00425a40(void * this, int param_1)
 * body: 00425a40-00425ab2
 */

void __thiscall FUN_00425a40(void *this,int param_1)

{
  DWORD DVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar3 = (int *)((int)this + 0x38);
    do {
      if ((piVar3[-0xb] == *(int *)this) && (piVar3[3] != 2)) {
        if ((*piVar3 < param_1) && ((piVar3[3] == 0 && (piVar3[2] == 0)))) {
          FUN_00425730(this,iVar2);
        }
        DVar1 = GetTickCount();
        if (((4000 < DVar1 - piVar3[4]) && (piVar3[1] < param_1)) && (piVar3[3] == 1)) {
          FUN_00425850(this,iVar2);
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x12;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return;
}


