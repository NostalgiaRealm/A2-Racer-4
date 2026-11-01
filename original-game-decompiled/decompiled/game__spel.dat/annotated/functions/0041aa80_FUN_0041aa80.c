
/* ==== FUN_0041aa80 @ 0041aa80 ==== 
 * signature: undefined __thiscall FUN_0041aa80(void * this, int param_1)
 * body: 0041aa80-0041ae6f
 */

void __thiscall FUN_0041aa80(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char local_17d;
  undefined1 local_17c [4];
  undefined4 *local_178;
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  void *local_168;
  char local_164 [4];
  char *local_160;
  char local_154 [4];
  char *local_150;
  undefined **local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  char local_10c [64];
  char local_cc [64];
  undefined4 local_8c [16];
  CHAR local_4c [64];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569d1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_168 = this;
  FUN_0041c660(this,8);
  pcVar8 = wsprintfA_exref;
  local_16c = *(undefined4 *)(param_1 + 0x44);
  wsprintfA(local_4c,s_RACER__d_005941a0,local_16c);
  iVar2 = FUN_0049eec0(&DAT_006fbb6c,local_4c);
  if (iVar2 != -1) {
    iVar2 = FUN_0049ef80(&DAT_006fbb6c,local_4c);
    local_140 = *(undefined4 *)(iVar2 + 4);
    local_13c = *(undefined4 *)(iVar2 + 8);
    local_138 = *(undefined4 *)(iVar2 + 0xc);
    local_134 = *(undefined4 *)(iVar2 + 0x10);
    local_130 = *(undefined4 *)(iVar2 + 0x14);
    FUN_0041c870(local_12c,(undefined1 *)(iVar2 + 0x18));
    local_4 = 0;
    FUN_0041c870(local_11c,(undefined1 *)(iVar2 + 0x28));
    local_144 = &PTR_FUN_005764c0;
    local_17c[0] = local_12c[0];
    local_4 = 1;
    FUN_004028f0(local_17c,'\0');
    FUN_004093c0(local_17c,local_12c,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004c3fa0((byte *)s_COPRADIO_original_wav____s_005941ac);
    local_17d = '1';
    uVar3 = FUN_0041c990(local_17c,&local_17d,0,1);
    FUN_004a6980((uint)((int)uVar3 < 0x40),(byte *)s__s___d__illegal_wav_name_for_car_005941ec);
    FUN_004c3fa0((byte *)s_COPRADIO_index___d_00594214);
    uVar7 = uVar3;
    if (local_174 < uVar3) {
      uVar7 = local_174;
    }
    if (uVar7 != 0) {
      puVar9 = local_178;
      puVar11 = local_8c;
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    }
    *(undefined1 *)((int)local_8c + uVar3) = 0;
    FUN_004c3fa0((byte *)s_COPRADIO_carname___s_00594228);
    iVar2 = 0;
    do {
      (*pcVar8)(local_10c,s_R_d_d_00594240,local_16c,iVar2);
      pcVar10 = local_10c;
      pcVar12 = s_COPRADIO__new_typename___s_00594248;
      FUN_004c3fa0((byte *)s_COPRADIO__new_typename___s_00594248);
      iVar2 = iVar2 + 1;
      (*pcVar8)(local_cc,s__s_d_wav_00594264,local_8c,iVar2,pcVar12,pcVar10);
      FUN_004c3fa0((byte *)s_COPRADIO_new_wavname___s_00594270);
      local_154[0] = local_17d;
      FUN_004028f0(local_154,'\0');
      uVar7 = 0xffffffff;
      pcVar10 = local_10c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      uVar4 = FUN_00402a00(local_154,uVar7,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar10 = local_10c;
        pcVar12 = local_150;
        for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar3 = uVar7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_004029e0(local_154,uVar7);
      }
      local_4._0_1_ = 3;
      FUN_004093c0(local_11c,local_154,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004028f0(local_154,'\x01');
      local_164[0] = local_17d;
      FUN_004028f0(local_164,'\0');
      uVar7 = 0xffffffff;
      pcVar10 = local_cc;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      uVar4 = FUN_00402a00(local_164,uVar7,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar10 = local_cc;
        pcVar12 = local_160;
        for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar3 = uVar7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_004029e0(local_164,uVar7);
      }
      local_4._0_1_ = 4;
      FUN_004093c0(local_12c,local_164,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004028f0(local_164,'\x01');
      FUN_004c3fa0((byte *)s_COPRADIO_Adding_new_cartype_0059428c);
      FUN_0049f030(&DAT_006fbb6c,(uint)&local_144);
      FUN_004c3fa0((byte *)s_COPRADIO_Creating_soundsource_005942ac);
      iVar5 = FUN_0049ecb0(&DAT_006fbb5c,local_10c);
      iVar5 = FUN_0041c570(local_168,iVar5);
    } while (((char)iVar5 != '\0') && (pcVar8 = wsprintfA_exref, iVar2 < 8));
    if (local_178 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_178 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)((int)local_178 + -1));
      }
      else {
        *(char *)((int)local_178 + -1) = cVar1 + -1;
      }
    }
    local_178 = (undefined4 *)0x0;
    local_174 = 0;
    local_170 = 0;
    local_4 = 0xffffffff;
    FUN_0049f4c0(&local_144);
  }
  ExceptionList = local_c;
  return;
}


