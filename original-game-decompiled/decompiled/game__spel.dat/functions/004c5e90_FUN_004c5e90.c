
/* ==== FUN_004c5e90 @ 004c5e90 ==== 
 * signature: undefined4 __cdecl FUN_004c5e90(LPCSTR param_1, LPCSTR param_2)
 * body: 004c5e90-004c5f0e;004c5f1e-004c5f54;004c5f64-004c6026;004c6036-004c6046;004c6056-004c615b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c5f0f-004c5f1d 004c5f55-004c5f63 004c6027-004c6035 004c6047-004c6055
 */

undefined4 __cdecl FUN_004c5e90(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int local_1c;
  undefined4 local_18;
  char local_14 [20];
  
  iVar4 = 0;
  if (DAT_00740914 != 0) {
    FUN_004c3fa0((byte *)s__s__d____warning___double_call_t_005b4970);
    return 0;
  }
  DAT_00740900 = (FILE *)FUN_005589a5(param_1,&DAT_005b496c);
  if (DAT_00740900 != (FILE *)0x0) {
    FUN_00558b35((char *)&param_1,2,1,(int *)DAT_00740900);
    if ((short)param_1 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____could_not_open_<_s>_005b494c);
    }
    DAT_00740908 = (int)(short)param_1;
    DAT_0074090c = LocalAlloc(0x40,DAT_00740908 * 0x1c);
    if (DAT_0074090c == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____error_not_enough_memory_005b4910);
    }
    local_1c = 0;
    if (0 < DAT_00740908) {
      do {
        FUN_00558b35(local_14,0x14,1,(int *)DAT_00740900);
        FUN_00558b35((char *)&local_18,1,4,(int *)DAT_00740900);
        uVar2 = 0xffffffff;
        pcVar5 = local_14;
        do {
          pcVar7 = pcVar5;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        pcVar5 = pcVar7 + -uVar2;
        pcVar7 = (char *)((int)DAT_0074090c + iVar4);
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
        *(undefined4 *)((int)DAT_0074090c + iVar4 + 0x14) = local_18;
        if ((DAT_00740900->_flag & 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____error_while_reading_fil_005b48e4);
        }
        local_1c = local_1c + 1;
        iVar4 = iVar4 + 0x1c;
      } while (local_1c < DAT_00740908);
    }
    FUN_005588fd(DAT_00740900);
    DAT_00740904 = FUN_005589a5(param_2,&DAT_005b496c);
    if (DAT_00740904 != 0) {
      uVar2 = FUN_005692e1(DAT_00740904);
      DAT_007408fc = FUN_00569269(uVar2);
      FUN_004c3fa0(&DAT_005b48dc);
      FUN_004c3fa0((byte *)s______s______s_005b48bc);
      FUN_004c3fa0((byte *)s______s_005b4880);
      iVar4 = 0;
      if (DAT_00740908 != 1 && -1 < DAT_00740908 + -1) {
        iVar6 = 0;
        do {
          *(int *)(iVar6 + 0x18 + (int)DAT_0074090c) =
               *(int *)(iVar6 + 0x30 + (int)DAT_0074090c) -
               *(int *)(iVar6 + 0x14 + (int)DAT_0074090c);
          FUN_004c3fa0((byte *)s______s____d_005b4870);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x1c;
        } while (iVar4 < DAT_00740908 + -1);
      }
      *(DWORD *)(iVar4 * 0x1c + 0x18 + (int)DAT_0074090c) =
           DAT_007408fc - *(int *)(iVar4 * 0x1c + 0x14 + (int)DAT_0074090c);
      FUN_004c3fa0((byte *)s______s____d_005b4870);
      FUN_004c3fa0((byte *)s______s_005b4880);
      DAT_00740914 = 1;
      return 0;
    }
    DAT_00740904 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____could_not_open_<_s>_005b494c);
}


