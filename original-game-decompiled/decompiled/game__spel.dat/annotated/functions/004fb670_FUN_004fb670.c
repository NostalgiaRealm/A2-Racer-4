
/* ==== FUN_004fb670 @ 004fb670 ==== 
 * signature: undefined4 * __thiscall FUN_004fb670(void * this, undefined4 param_1, undefined4 * param_2)
 * body: 004fb670-004fb771
 */

undefined4 * __thiscall FUN_004fb670(void *this,undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  param_1 = param_2;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057341e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fb420(this);
  this_00 = (void *)((int)this + 0xc);
  local_4 = 0;
  FUN_00558643(this_00,0x30,4,FUN_0043e110);
  *(undefined ***)this = &PTR_FUN_00578490;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0xcc) = *param_2;
  param_2 = (undefined4 *)0x4;
  do {
    param_1 = param_1 + 1;
    FUN_004fb360(this_00,this,(int *)*param_1);
    pbVar1 = *(byte **)(*(int *)((int)this_00 + 8) + 0xa4);
    if ((*pbVar1 & 0xc) != 0) {
      iVar2 = *(ushort *)((int)this + 6) - 1;
      if (-1 < iVar2) {
        puVar3 = (undefined4 *)(*(int *)((int)this + 8) + iVar2 * 4);
        do {
          if ((byte *)*puVar3 == pbVar1) break;
          iVar2 = iVar2 + -1;
          puVar3 = puVar3 + -1;
        } while (-1 < iVar2);
      }
      if (iVar2 == -1) {
        if (*(ushort *)((int)this + 4) <= *(ushort *)((int)this + 6)) {
          FUN_004f6060((ushort *)((int)this + 4));
        }
        *(byte **)(*(int *)((int)this + 8) + (uint)*(ushort *)((int)this + 6) * 4) = pbVar1;
        *(short *)((int)this + 6) = *(short *)((int)this + 6) + 1;
      }
    }
    this_00 = (void *)((int)this_00 + 0x30);
    param_2 = (undefined4 *)((int)param_2 + -1);
    if (param_2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return this;
    }
  } while( true );
}


