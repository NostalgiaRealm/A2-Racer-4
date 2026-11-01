
/* ==== FUN_004427f3 @ 004427f3 ==== 
 * signature: undefined __thiscall FUN_004427f3(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 004427f3-004427ff
 */

void __thiscall
FUN_004427f3(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *(undefined4 *)((int)this + 0x80) = param_3;
  *(undefined4 *)((int)this + 0x84) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x30) = param_5;
  *(undefined4 *)((int)this + 0x50) = param_5;
  *(undefined4 *)((int)this + 0x70) = param_5;
  *(undefined4 *)((int)this + 0x14) = 0xff000000;
  *(undefined4 *)((int)this + 0x34) = 0xff000000;
  *(undefined4 *)((int)this + 0x54) = 0xff000000;
  *(undefined4 *)((int)this + 0x74) = 0xff000000;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x3f800000;
  FUN_00442870(this,param_1,param_2);
  return;
}


