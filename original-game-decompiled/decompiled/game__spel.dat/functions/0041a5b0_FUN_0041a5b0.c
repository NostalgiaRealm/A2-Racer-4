
/* ==== FUN_0041a5b0 @ 0041a5b0 ==== 
 * signature: undefined __cdecl FUN_0041a5b0(int param_1, int param_2, float param_3)
 * body: 0041a5b0-0041a5f0;0041a5f4-0041a6cb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041a5f1-0041a5f3
 */

void __cdecl FUN_0041a5b0(int param_1,int param_2,float param_3)

{
  char cVar1;
  int iVar2;
  void *this;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569bd4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0040dad0(param_1);
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Racer_Cop_Collision_hand_00593e78);
  }
  FUN_00426fe0(&DAT_005d3460,param_1,3,param_3,&stack0x00000010,'\0');
  if ((param_2 == DAT_006fba58) && (iVar2 = 0, 0 < DAT_005d2ab0)) {
    do {
      if ((&DAT_005973cc)[iVar2 * 0x16] == param_1) {
        FUN_0049df90(auStack_1c,(byte *)s__racer_dcollision_00593ebc);
        iVar2 = DAT_005d2ab0;
        puVar3 = auStack_1c;
        uStack_4 = 0;
        iVar4 = param_1;
        this = (void *)FUN_004891a0();
        FUN_0048a910(this,(int)puVar3,iVar4);
        uStack_4 = 0xffffffff;
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((LPVOID)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005d2ab0);
  }
  ExceptionList = pvStack_c;
  return;
}


