
/* ==== FUN_004bc160 @ 004bc160 ==== 
 * signature: undefined __fastcall FUN_004bc160(void * param_1)
 * body: 004bc160-004bc185;004bc189-004bc1d0;004bc1d4-004bc1f6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bc186-004bc188 004bc1d1-004bc1d3
 */

void __fastcall FUN_004bc160(void *param_1)

{
  int iVar1;
  char *pcStack_1a4;
  undefined1 *puStack_1a0;
  undefined4 local_198 [48];
  undefined4 auStack_d8 [3];
  char local_cc [204];
  
  puStack_1a0 = (undefined1 *)local_198;
  if (*(int *)((int)param_1 + 0x274) != 1) {
    puStack_1a0 = (undefined1 *)0xd4;
    pcStack_1a4 = s___d3dev_h_005b1094;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____device_was_not_initiali_005b106c);
  }
  local_cc[0] = -0x34;
  local_cc[1] = '\0';
  local_cc[2] = '\0';
  local_cc[3] = '\0';
  local_198[0] = 0xcc;
  pcStack_1a4 = local_cc;
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0x25c) + 0xc))(*(int **)((int)param_1 + 0x25c));
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_getting_device_ca_005b2290);
  }
  FUN_004c0ff0(param_1,auStack_d8,&pcStack_1a4);
  FUN_004c15f0(param_1);
  return;
}


