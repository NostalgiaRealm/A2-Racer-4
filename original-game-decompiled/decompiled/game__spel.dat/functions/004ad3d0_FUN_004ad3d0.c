
/* ==== FUN_004ad3d0 @ 004ad3d0 ==== 
 * signature: undefined __thiscall FUN_004ad3d0(void * this, float * param_1, undefined4 param_2, undefined4 param_3, int * param_4, undefined4 * param_5, int * param_6)
 * body: 004ad3d0-004ad630
 */

void __thiscall
FUN_004ad3d0(void *this,float *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 *param_5,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int local_18;
  int local_14;
  int local_10;
  float *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  iVar1 = *(int *)((int)this + 0x1c);
  iVar4 = *(int *)((int)this + 0x18);
  local_c = param_1;
  local_8 = 0;
  local_4 = param_3;
  if (iVar4 < iVar1) {
    param_1 = (float *)((int)this + 0x398);
    do {
      local_18 = FUN_004ae1f0(DAT_00715f50,iVar4,0);
      local_14 = FUN_004ae1f0(DAT_00715f50,iVar4,1);
      local_10 = FUN_004ae1f0(DAT_00715f50,iVar4,2);
      uVar2 = FUN_004ad2b0((float *)&local_c,(int)&local_18);
      if (((char)uVar2 == '\x01') && (0.4 < *param_1)) {
        *param_4 = iVar4;
        *param_5 = 0;
        *param_6 = iVar3;
        return;
      }
      iVar4 = iVar4 + 3;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 3;
    } while (iVar4 < iVar1);
  }
  iVar1 = *(int *)((int)this + 0x14);
  iVar4 = *(int *)((int)this + 0x10);
  iVar3 = 0;
  if (iVar4 < iVar1) {
    param_1 = (float *)((int)this + 0x198);
    do {
      local_18 = FUN_004ae2a0(DAT_00715f50,iVar4,0);
      local_14 = FUN_004ae2a0(DAT_00715f50,iVar4,1);
      local_10 = FUN_004ae2a0(DAT_00715f50,iVar4,2);
      uVar2 = FUN_004ad2b0((float *)&local_c,(int)&local_18);
      if (((char)uVar2 == '\x01') && (0.4 < *param_1)) {
        *param_4 = iVar4;
        *param_5 = 1;
        *param_6 = iVar3;
        FUN_004c3fa0((byte *)s_Found_road_plane___d__d_005b0504);
        return;
      }
      iVar4 = iVar4 + 3;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 3;
    } while (iVar4 < iVar1);
  }
  iVar1 = *(int *)((int)this + 0x2c);
  iVar4 = *(int *)((int)this + 0x28);
  iVar3 = 0;
  if (iVar4 < iVar1) {
    pfVar5 = (float *)((int)this + 0x818);
    do {
      local_18 = FUN_004ae3e0(DAT_00715f50,iVar4,0);
      local_14 = FUN_004ae3e0(DAT_00715f50,iVar4,1);
      local_10 = FUN_004ae3e0(DAT_00715f50,iVar4,2);
      uVar2 = FUN_004ad2b0((float *)&local_c,(int)&local_18);
      if (((char)uVar2 == '\x01') && (0.4 < *pfVar5)) {
        *param_4 = iVar4;
        *param_5 = 2;
        *param_6 = iVar3;
        FUN_004c3fa0((byte *)s_Found_extra_plane___d__d_005b04e8);
        return;
      }
      iVar4 = iVar4 + 3;
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 3;
    } while (iVar4 < iVar1);
  }
  *param_4 = -1;
  *param_5 = 0xffffffff;
  *param_6 = -1;
  return;
}


