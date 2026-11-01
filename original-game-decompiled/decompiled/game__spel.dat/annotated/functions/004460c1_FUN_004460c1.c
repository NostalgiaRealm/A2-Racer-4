
/* ==== FUN_004460c1 @ 004460c1 ==== 
 * signature: undefined __stdcall FUN_004460c1(void)
 * body: 004460c1-00446172;00446176-004461f1;004461f5-0044623a;0044623e-004462a0
 */

void FUN_004460c1(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar2 = DAT_006ed6f8;
  if (DAT_006fb8d0 != 0) {
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar3 + 0x60) = DAT_006ed6f8;
    uVar7 = *(undefined4 *)(DAT_0073b1b0 + iVar2 * 0x48);
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x48) = uVar7;
    if (*(int *)(iVar3 + 0x5c) == 1) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
    }
    if (DAT_0073b4ec != DAT_006ed6f8) {
      DAT_0073b4ec = DAT_006ed6f8;
      iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                        (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006ed6f8 * 0x48));
      if (iVar2 != 0) {
        FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
  }
  iVar2 = 0;
  do {
    iVar3 = FUN_00445950(iVar2);
    if (*(int *)(&DAT_006ed830 + iVar3 * 0x134) != 0) {
      FUN_004459b0(iVar2);
      iVar3 = FUN_00445950(iVar2);
      puVar5 = (undefined4 *)(&DAT_006ed700 + iVar3 * 0x134);
      puVar6 = &DAT_0073b474;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      piVar1 = DAT_0073b4b4;
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
      }
      uVar8 = 1;
      uVar7 = 6;
      iVar3 = *DAT_0073b4b4;
      iVar4 = FUN_00445950(iVar2);
      iVar3 = (**(code **)(iVar3 + 0x74))(piVar1,4,2,&DAT_006ed740 + iVar4 * 0x134,uVar7,uVar8);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s___d__DramPrimitive_error_0059d940);
      }
      iVar3 = FUN_00445950(iVar2);
      *(int *)(&DAT_006ed824 + iVar3 * 0x134) = *(int *)(&DAT_006ed824 + iVar3 * 0x134) + 1;
      iVar4 = FUN_00445950(iVar2);
      if (*(int *)(&DAT_006ed82c + iVar4 * 0x134) <= *(int *)(&DAT_006ed824 + iVar3 * 0x134)) {
        iVar3 = FUN_00445950(iVar2);
        *(undefined4 *)(&DAT_006ed830 + iVar3 * 0x134) = 0;
      }
    }
    iVar2 = iVar2 + 1;
    if (99 < iVar2) {
      return;
    }
  } while( true );
}


