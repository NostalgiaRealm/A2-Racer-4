
/* ==== FUN_004d49e0 @ 004d49e0 ==== 
 * signature: undefined4 * __thiscall FUN_004d49e0(void * this, int param_1, uint param_2, undefined4 param_3)
 * body: 004d49e0-004d4add
 */

undefined4 * __thiscall FUN_004d49e0(void *this,int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_5c [20];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056ffa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined ***)this = &PTR_FUN_0057912c;
  local_4 = 1;
  FUN_0054d3cd();
  puVar1 = (undefined4 *)FUN_0054ec38(local_5c);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *(undefined4 *)((int)this + 0xc) = puVar1[1];
  *(undefined4 *)((int)this + 0x10) = puVar1[2];
  *(undefined4 *)((int)this + 0x14) = puVar1[3];
  if (DAT_0074db00 == 0) {
    DAT_0074db00 = *(int *)((int)this + 0x10);
    FUN_005584e0(0x4d4ae0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  FUN_0054d486();
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_00559d4e(*(LPVOID *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (param_1 == 0) {
    *(int *)((int)this + 0x10) = DAT_0074db00;
    ExceptionList = local_c;
    return this;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(uint *)((int)this + 0x14) = param_2 & 0xff;
  ExceptionList = local_c;
  return this;
}


