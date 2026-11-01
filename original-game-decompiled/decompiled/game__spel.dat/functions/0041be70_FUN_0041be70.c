
/* ==== FUN_0041be70 @ 0041be70 ==== 
 * signature: undefined __thiscall FUN_0041be70(void * this, undefined4 param_1, int param_2, int param_3)
 * body: 0041be70-0041c0a1
 */

void __thiscall FUN_0041be70(void *this,undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x1dc) == 0) {
    *(int *)((int)this + 0x1d4) = param_2;
    *(undefined4 *)((int)this + 0x1dc) = param_1;
  }
  switch(*(undefined4 *)((int)this + 0x1dc)) {
  case 1:
    if (*(int *)((int)this + 0x1d8) == 0) {
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 1;
      return;
    }
    break;
  case 2:
    if (*(int *)((int)this + 0x1d8) == 0) {
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 8;
      return;
    }
    break;
  case 3:
    if (*(int *)((int)this + 0x1d8) == 0) {
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 9;
      return;
    }
    break;
  case 4:
    if (*(int *)((int)this + 0x1d8) == 0) {
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 0xb;
      return;
    }
    break;
  case 5:
    if (*(int *)((int)this + 0x1d8) == 0) {
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 0xe;
      return;
    }
    break;
  case 6:
    iVar1 = FUN_0040dad0(param_2);
    if (((iVar1 != -1) && (iVar1 < DAT_005d2ab0)) && (*(int *)((int)this + 0x1d8) == 0)) {
      *(undefined4 *)((int)this + 0x1d8) = 0xf;
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(int *)((int)this + 0x70) = (&DAT_005973c0)[iVar1 * 0x16] * 0x10 + 0x7c + (int)this;
      return;
    }
    break;
  case 7:
    iVar1 = FUN_0040dad0(param_2);
    if (((iVar1 != -1) && (iVar1 < DAT_005d2ab0)) && (*(int *)((int)this + 0x1d8) == 0)) {
      *(undefined4 *)((int)this + 0x1d8) = 0x11;
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(int *)((int)this + 0x74) = (&DAT_005973c0)[iVar1 * 0x16] * 0x10 + 0xec + (int)this;
      return;
    }
    break;
  case 8:
    iVar1 = FUN_0040dad0(param_2);
    if (((iVar1 != -1) && (iVar1 < DAT_005d2ab0)) && (*(int *)((int)this + 0x1d8) == 0)) {
      *(undefined4 *)((int)this + 0x1d8) = 0x13;
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(int *)((int)this + 0x78) = (&DAT_005973c0)[iVar1 * 0x16] * 0x10 + 0x15c + (int)this;
      return;
    }
    break;
  case 9:
    if (*(int *)((int)this + 0x1d8) == 0) {
      *(undefined4 *)((int)this + 0x1d8) = 0x15;
      *(undefined4 *)((int)this + 0x1cc) = 0;
      *(int *)((int)this + 0x74) = DAT_006fba5c * 0x10 + 0xec + (int)this;
      return;
    }
    break;
  case 10:
    if (param_3 != -1) {
      *(undefined4 *)((int)this + 0x1d8) = 0x17;
      *(int *)((int)this + 0x1cc) = param_3;
    }
  }
  return;
}


