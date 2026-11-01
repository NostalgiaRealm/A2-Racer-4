
/* ==== FUN_004c6430 @ 004c6430 ==== 
 * signature: undefined __cdecl FUN_004c6430(FILE * param_1)
 * body: 004c6430-004c644c;004c6452-004c64b2;004c64b8-004c64c2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c644d-004c6451 004c64b3-004c64b7
 */

void __cdecl FUN_004c6430(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____null_ptr_assignment___005b4a4c);
  }
  if (DAT_00740914 == 0) {
    FUN_004c3fa0((byte *)s__s__d____file_close_005b4b1c);
    FUN_005588fd(param_1);
    return;
  }
  iVar1 = FUN_005692e1(DAT_00740904);
  iVar2 = FUN_005692e1((int)param_1);
  if (iVar2 == iVar1) {
    if (DAT_00740914 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____unopened_resource_file_a_005b4af0);
    }
  }
  else {
    FUN_005588fd(param_1);
  }
  return;
}


