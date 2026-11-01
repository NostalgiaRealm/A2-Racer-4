
/* ==== TargetIsGhostDriving @ 00404ae3 ==== 
 * signature: undefined4 __cdecl TargetIsGhostDriving(int param_1)
 * body: 00404ae3-00404b12;00404b16-00404b60
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to TargetIsGhostDriving funct']
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to TargetIsGhostDriving funct'] */

undefined4 __cdecl TargetIsGhostDriving(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined8 uVar2;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    uVar2 = FUN_00419120(*(int *)(&DAT_005cea34 + param_1 * 0x294),
                         *(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x3c +
                                 DAT_00715e50));
    if ((int)uVar2 == -1) {
      bVar1 = CheckRacerDirection(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 1;
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058f448);
}


