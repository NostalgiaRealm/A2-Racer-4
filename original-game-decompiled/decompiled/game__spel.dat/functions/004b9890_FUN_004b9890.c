
/* ==== FUN_004b9890 @ 004b9890 ==== 
 * signature: undefined __cdecl FUN_004b9890(uint * param_1, undefined4 param_2, int param_3, int param_4, int param_5)
 * body: 004b9890-004b998d;004b9991-004b9a60;004b9a64-004b9a9c;004b9aa0-004b9aad
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b998e-004b9990 004b9a61-004b9a63 004b9a9d-004b9a9f
 */

void __cdecl FUN_004b9890(uint *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int *unaff_EDI;
  int iVar6;
  uint *puVar7;
  int local_10 [2];
  int local_8;
  int *local_4;
  
  FUN_004b9840(param_3,param_4,param_5,local_10);
  FUN_004c3fa0((byte *)s_Location_of_texture__d__d__d__d_005b16f4);
  iVar1 = FUN_004b9800(param_3,param_4,param_5);
  FUN_004c3fa0((byte *)s_Number_of_mipmap_levels_in_this_t_005b16c8);
  if ((DAT_0073b4f8 == '\0') || (iVar1 == 0)) {
    iVar1 = local_8 - local_10[0];
    FUN_004c3fa0((byte *)s_To_load_dimension__d_005b166c);
    puVar2 = (undefined4 *)FUN_004c2a50();
    piVar4 = (int *)FUN_004c4b90(iVar1,iVar1,0x1800,puVar2);
    puVar2 = (undefined4 *)FUN_004c2a50();
    uVar3 = FUN_004c4b90(iVar1,iVar1,0x1800,puVar2);
    *param_1 = uVar3;
    FUN_004c3fa0((byte *)s_Now_blit_the_data_into_the_temp_t_005b1640);
    iVar1 = (**(code **)(*piVar4 + 0x14))(piVar4,0,param_2,local_10,0x1000000);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Could_not_blit_texture_t_005b1610);
    }
    FUN_004c3fa0((byte *)s_And_blit_the_texture_to_the_real_005b15e4);
    iVar1 = (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,0,piVar4,0,0x1000000,0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Could_not_blit_texture_f_005b15a0);
    }
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  else {
    iVar6 = local_8 - local_10[0];
    puVar5 = (uint *)(iVar1 + 1);
    puVar7 = puVar5;
    puVar2 = (undefined4 *)FUN_004c2a50();
    uVar3 = FUN_004c4c30(iVar6,iVar6,0x1800,puVar2,puVar7);
    *param_1 = uVar3;
    param_1 = puVar5;
    if (0 < (int)puVar5) {
      do {
        FUN_004b9840(param_3,param_4,iVar6,local_10);
        puVar2 = (undefined4 *)FUN_004c2a50();
        piVar4 = (int *)FUN_004c4b90(iVar6,iVar6,0x1800,puVar2);
        iVar1 = (**(code **)(*piVar4 + 0x14))(piVar4,0,param_2,local_10,0x1000000);
        if (iVar1 != 0) {
          FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s___s___d_Could_not_blit_texture_t_005b1684);
        }
        (**(code **)(*local_4 + 0x14))(local_4,0,piVar4,0,0x1000000,0);
        (**(code **)(*piVar4 + 8))(piVar4);
        (**(code **)(*unaff_EDI + 0x30))(unaff_EDI,&stack0xffffffdc,&stack0xffffffe0);
        iVar6 = iVar6 >> 1;
        param_1 = (uint *)((int)param_1 + -1);
      } while (param_1 != (uint *)0x0);
      return;
    }
  }
  return;
}


