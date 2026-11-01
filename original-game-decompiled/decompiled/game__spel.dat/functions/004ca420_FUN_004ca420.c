
/* ==== FUN_004ca420 @ 004ca420 ==== 
 * signature: undefined4 __cdecl FUN_004ca420(LPCSTR param_1)
 * body: 004ca420-004ca6e5;004ca6e9-004ca9ce
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ca6e6-004ca6e8
 */

undefined4 __cdecl FUN_004ca420(LPCSTR param_1)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  HLOCAL pvVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  short *local_838;
  int iStack_834;
  undefined2 uStack_82e;
  int iStack_82c;
  short local_828;
  short local_826;
  short local_824;
  short local_822;
  uint local_820;
  uint local_81c;
  int local_818;
  short *local_814;
  uint uStack_810;
  int local_80c;
  uint uStack_808;
  uint uStack_804;
  short local_800 [1024];
  
  local_80c = FUN_004ca100();
  FUN_004c3fa0((byte *)s_Load_new_ascii_set__s__005b5d98);
  piVar4 = FUN_004c62c0(param_1);
  if (piVar4 != (int *)0x0) {
    psVar12 = local_800;
    for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
      psVar12[0] = 0;
      psVar12[1] = 0;
      psVar12 = psVar12 + 2;
    }
    FUN_00558b35((char *)local_800,8,0x100,piVar4);
    psVar12 = local_800;
    iVar9 = -1;
    iVar11 = -1;
    iVar10 = 0;
    do {
      if (((0 < *psVar12) && (0 < psVar12[1])) &&
         (iVar5 = (int)psVar12[1] * (int)*psVar12, iVar5 - iVar9 != 0 && iVar9 <= iVar5)) {
        iVar9 = iVar5;
        iVar11 = iVar10;
      }
      iVar10 = iVar10 + 1;
      psVar12 = psVar12 + 4;
    } while (iVar10 < 0x100);
    if ((-1 < iVar9) && (-1 < iVar11)) {
      FUN_004c3fa0((byte *)s_Largest_buffer_size_of_character_005b5d58);
      FUN_00558b35((char *)&local_824,1,2,piVar4);
      FUN_00558b35((char *)&local_822,1,2,piVar4);
      FUN_00558b35((char *)&local_826,1,2,piVar4);
      FUN_00558b35((char *)&local_828,1,2,piVar4);
      *(int *)(param_1 + 0x70) = (int)local_824;
      *(int *)(param_1 + 0x74) = (int)local_822;
      *(int *)(param_1 + 0x78) = (int)local_826;
      sVar1 = local_800[iVar11 * 4];
      sVar2 = local_800[iVar11 * 4 + 1];
      param_1[0x88] = '\0';
      param_1[0x89] = '\0';
      param_1[0x8a] = '\0';
      param_1[0x8b] = '\0';
      param_1[0x8c] = '\0';
      param_1[0x8d] = '\0';
      param_1[0x8e] = '\0';
      param_1[0x8f] = '\0';
      param_1[0x6c] = '\x03';
      param_1[0x6d] = '\0';
      param_1[0x6e] = '\0';
      param_1[0x6f] = '\0';
      param_1[100] = '\0';
      param_1[0x65] = '\x01';
      param_1[0x66] = '\0';
      param_1[0x67] = '\0';
      *(int *)(param_1 + 0x7c) = (int)local_828;
      *(int *)(param_1 + 0x80) = (int)sVar1;
      *(int *)(param_1 + 0x84) = (int)sVar2;
      pvVar6 = LocalAlloc(0x40,0xc00);
      *(HLOCAL *)(param_1 + 0x68) = pvVar6;
      if (pvVar6 == (HLOCAL)0x0) {
        return 2000;
      }
      iVar9 = 0;
      do {
        pvVar6 = LocalAlloc(0x40,0xc);
        *(HLOCAL *)(iVar9 + *(int *)(param_1 + 0x68)) = pvVar6;
        if (*(int *)(iVar9 + *(int *)(param_1 + 0x68)) == 0) {
          return 2000;
        }
        iVar9 = iVar9 + 0xc;
      } while (iVar9 < 0xc00);
      FUN_004ca110((int)param_1);
      FUN_004c3fa0((byte *)s_Importing_char_data_005b5d40);
      local_814 = local_800 + 1;
      local_818 = 0;
      iVar9 = 0;
      do {
        iVar11 = local_818;
        iVar10 = 0;
        if ((local_814[-1] < 1) || (*local_814 < 1)) {
          *(undefined4 *)(*(int *)(DAT_00740a18 + 0x68) + 8 + iVar9) = 0;
          *(undefined4 *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9) + 4) = 0;
          *(undefined4 *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9) + 8) = 0;
        }
        else {
          *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9) + 4) = (int)local_814[-1];
          *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9) + 8) = (int)*local_814;
          *(undefined4 *)(*(int *)(DAT_00740a18 + 0x68) + 8 + iVar9) = 1;
          FUN_004c6160(piVar4,*(int *)(local_814 + 1),0);
          iVar5 = *(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9);
          uVar7 = FUN_004c4a80(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
          **(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + iVar9) = uVar7;
          if (**(int **)(*(int *)(DAT_00740a18 + 0x68) + iVar9) == 0) {
            return 2000;
          }
          uVar8 = DAT_005b3940;
          if (DAT_007409cc != 0) {
            if (DAT_007409cc == 4) {
              uVar8 = FUN_004c81b0(DAT_007408f0,0x18);
            }
            else {
              uVar8 = FUN_004c81b0(DAT_005b3940,8);
            }
          }
          piVar3 = (int *)**(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + iVar9);
          local_820 = uVar8;
          local_81c = uVar8;
          iVar5 = (**(code **)(*piVar3 + 0x74))(piVar3,8,&local_820);
          if (iVar5 != 0) {
            FUN_004c4400(iVar5);
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____failed_to_set_color_key_005b4458);
          }
          local_838 = (short *)FUN_004ca160(iVar11,&iStack_82c);
          switch(DAT_007409cc) {
          case 0:
            iVar11 = *(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9);
            if (0 < *(int *)(iVar11 + 8)) {
              do {
                FUN_00558b35((char *)local_838,1,*(uint *)(iVar11 + 4),piVar4);
                local_838 = (short *)((int)local_838 + iStack_82c);
                iVar10 = iVar10 + 1;
                iVar11 = *(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9);
              } while (iVar10 < *(int *)(iVar11 + 8));
            }
            break;
          case 1:
            iStack_834 = 0;
            iVar11 = *(int *)(DAT_00740a18 + 0x68);
            iVar10 = DAT_00740a18;
            if (0 < *(int *)(*(int *)(iVar9 + iVar11) + 8)) {
              do {
                iVar5 = 0;
                psVar12 = local_838;
                if (0 < *(int *)(*(int *)(iVar9 + iVar11) + 4)) {
                  do {
                    FUN_00558b35((char *)&uStack_808,1,1,piVar4);
                    uVar8 = FUN_004c81b0(uStack_808 & 0xff,8);
                    *psVar12 = (short)uVar8;
                    psVar12 = psVar12 + 1;
                    iVar5 = iVar5 + 1;
                    iVar10 = DAT_00740a18;
                  } while (iVar5 < *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9) + 4));
                }
                local_838 = (short *)((int)local_838 + iStack_82c);
                iVar11 = *(int *)(iVar10 + 0x68);
                iStack_834 = iStack_834 + 1;
              } while (iStack_834 < *(int *)(*(int *)(iVar9 + iVar11) + 8));
            }
            break;
          case 2:
            iStack_834 = 0;
            iVar11 = *(int *)(DAT_00740a18 + 0x68);
            iVar10 = DAT_00740a18;
            if (0 < *(int *)(*(int *)(iVar9 + iVar11) + 8)) {
              do {
                iVar5 = 0;
                psVar12 = local_838;
                if (0 < *(int *)(*(int *)(iVar9 + iVar11) + 4)) {
                  do {
                    FUN_00558b35((char *)&uStack_810,1,1,piVar4);
                    FUN_004c8380(uStack_810 & 0xff,8,psVar12);
                    psVar12 = (short *)((int)psVar12 + 3);
                    iVar5 = iVar5 + 1;
                    iVar10 = DAT_00740a18;
                  } while (iVar5 < *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9) + 4));
                }
                local_838 = (short *)((int)local_838 + iStack_82c);
                iVar11 = *(int *)(iVar10 + 0x68);
                iStack_834 = iStack_834 + 1;
              } while (iStack_834 < *(int *)(*(int *)(iVar9 + iVar11) + 8));
            }
            break;
          case 4:
            iStack_834 = 0;
            iVar11 = *(int *)(DAT_00740a18 + 0x68);
            iVar10 = DAT_00740a18;
            if (0 < *(int *)(*(int *)(iVar9 + iVar11) + 8)) {
              do {
                iVar5 = 0;
                psVar12 = local_838;
                if (0 < *(int *)(*(int *)(iVar9 + iVar11) + 4)) {
                  do {
                    FUN_00558b35((char *)&uStack_804,1,1,piVar4);
                    FUN_00558b35((char *)&uStack_82e,1,1,piVar4);
                    FUN_00558b35((char *)((int)&uStack_82e + 1),1,1,piVar4);
                    uVar8 = FUN_004c81b0((uint)uStack_82e << 8 | uStack_804 & 0xff,0x18);
                    *psVar12 = (short)uVar8;
                    psVar12 = psVar12 + 1;
                    iVar5 = iVar5 + 1;
                    iVar10 = DAT_00740a18;
                  } while (iVar5 < *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + iVar9) + 4));
                }
                local_838 = (short *)((int)local_838 + iStack_82c);
                iVar11 = *(int *)(iVar10 + 0x68);
                iStack_834 = iStack_834 + 1;
              } while (iStack_834 < *(int *)(*(int *)(iVar9 + iVar11) + 8));
            }
          }
          iVar11 = local_818;
          FUN_004ca220(local_818,local_838);
          if ((*(byte *)(piVar4 + 3) & 0x20) != 0) {
            return 0x3e9;
          }
        }
        iVar9 = iVar9 + 0xc;
        local_818 = iVar11 + 1;
        local_814 = local_814 + 4;
        if (0xbff < iVar9) {
          *(undefined4 *)(DAT_00740a18 + 0x90) = 0x457;
          FUN_004ca110(local_80c);
          return 0;
        }
      } while( true );
    }
  }
  return 1000;
}


