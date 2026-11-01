
/* ==== FUN_00425c30 @ 00425c30 ==== 
 * signature: undefined1 __thiscall FUN_00425c30(void * this, int param_1, undefined4 param_2)
 * body: 00425c30-00425cc8;00425cd1-00425f02;00425f08-00425f3b;00425f3f-00425fa5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00425cc9-00425cd0 00425f03-00425f07 00425f3c-00425f3e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00425c30(void *this,int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_19d;
  int local_19c;
  float local_198;
  float local_194;
  float local_18c;
  CHAR local_184 [4];
  byte local_180 [64];
  char local_140 [64];
  byte local_100 [256];
  
  local_19d = 0;
  iVar3 = read_ini_value_setting(PTR_s_Damageable_Car_Objects_00595b70,PTR_s_count_00595b74);
  local_19c = 0;
  if (iVar3 < 1) {
    return 0;
  }
  do {
    FUN_005587a3(local_184,&DAT_00595d28);
    read_ini_string_setting(PTR_s_Damageable_Car_Objects_00595b70,local_184,(LPSTR)local_100,0x100);
    iVar4 = get_ini_arguments_online(local_100,(uint *)0x0);
    if ((iVar4 != 0xf) && (iVar4 != 0xe)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____Car_object_description_h_00595e1c);
    }
    FUN_004c3f10(0,(char *)local_180,0x40);
    uVar6 = 0xffffffff;
    pbVar9 = local_180;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
    uVar2 = *(uint *)(param_1 + 8);
    uVar7 = ~uVar6 - 1;
    uVar6 = uVar7;
    if (uVar2 < uVar7) {
      uVar6 = uVar2;
    }
    bVar11 = false;
    iVar8 = 0;
    bVar12 = true;
    pbVar9 = *(byte **)(param_1 + 4);
    pbVar10 = local_180;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar11 = *pbVar9 < *pbVar10;
      bVar12 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar12);
    if (!bVar12) {
      iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
    }
    if ((((iVar8 == 0) && (uVar7 <= uVar2)) && (uVar2 == uVar7)) && (*(int *)((int)this + 4) < 0x32)
       ) {
      FUN_004c3f10(1,local_140,0x40);
      iVar8 = FUN_004b75a0(&DAT_00712130,local_140);
      *(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 8) = iVar8;
      *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0xc) = param_2;
      FUN_004354a0(2);
      FUN_004354a0(3);
      FUN_004354a0(4);
      *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x18) =
           *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x18) - 1.0;
      FUN_004354a0(5);
      FUN_004354a0(6);
      FUN_004354a0(7);
      FUN_004354a0(8);
      FUN_004354a0(9);
      FUN_004354a0(10);
      *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x2c) =
           local_18c * 0.0027777778 * _DAT_005b23b8;
      *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x30) =
           local_198 * 0.0027777778 * _DAT_005b23b8;
      *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x34) =
           local_194 * 0.0027777778 * _DAT_005b23b8;
      uVar5 = FUN_004c3ec0(0xb);
      *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x38) = uVar5;
      uVar5 = FUN_004c3ec0(0xc);
      *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x3c) = uVar5;
      uVar5 = FUN_004c3ec0(0xd);
      *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x4c) = uVar5;
      *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x44) = 0;
      *(undefined4 *)((int)this + (*(int *)((int)this + 4) + 1) * 0x48) = 0;
      if (iVar4 == 0xf) {
        uVar5 = FUN_004c3ec0(0xe);
        *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x40) = uVar5;
        iVar4 = *(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x40);
        if ((iVar4 < 1) || (10 < iVar4)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____Invalid_group_index__Sh_00595d50);
        }
      }
      else {
        *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x40) = 0;
      }
      if (*(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x3c) <
          *(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x38)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____Damaged_state_level_is_g_00595db0);
      }
      FUN_00425490(this,*(int *)((int)this + 4));
      local_19d = 1;
      *(undefined4 *)
       (*(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x10) * 0xf0 + 0x5c + DAT_00715e50) =
           0;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    }
    local_19c = local_19c + 1;
    if (iVar3 <= local_19c) {
      return local_19d;
    }
  } while( true );
}


