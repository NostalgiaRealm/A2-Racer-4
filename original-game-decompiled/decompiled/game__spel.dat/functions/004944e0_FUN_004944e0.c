
/* ==== FUN_004944e0 @ 004944e0 ==== 
 * signature: undefined __thiscall FUN_004944e0(void * this, int param_1)
 * body: 004944e0-0049455d
 */

void __thiscall FUN_004944e0(void *this,int param_1)

{
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x40) != 0) {
      FUN_00493ed0(this,0);
      FUN_00493f10(this,0);
    }
  }
  else {
    if (param_1 == 5) {
      if (*(int *)((int)this + 0x40) != 5) {
        FUN_00493ed0(this,1);
        FUN_00493f10(this,0);
        FUN_00494480((int)this);
      }
      FUN_004940e0((int)this);
      *(undefined4 *)((int)this + 0x40) = 5;
      return;
    }
    if (*(int *)((int)this + 0x40) != param_1) {
      FUN_00493ed0(this,1);
      FUN_00493f10(this,1);
      *(int *)((int)this + 0x40) = param_1;
      return;
    }
  }
  *(int *)((int)this + 0x40) = param_1;
  return;
}


