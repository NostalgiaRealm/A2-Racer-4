
/* ==== FUN_00471240 @ 00471240 ==== 
 * signature: undefined __fastcall FUN_00471240(int param_1)
 * body: 00471240-0047135d
 */

void __fastcall FUN_00471240(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  void *this;
  uint uVar4;
  char *pcVar5;
  char local_11;
  int local_10;
  int local_c;
  byte local_8;
  undefined3 uStack_7;
  int local_4;
  
  local_c = param_1;
  iVar3 = FUN_00470fb0(param_1);
  local_4 = *(int *)(iVar3 + 0x8c);
  local_10 = 0;
  if (0 < local_4) {
    do {
      pcVar5 = &local_11;
      iVar3 = local_10;
      this = (void *)FUN_00470fb0(param_1);
      bVar2 = FUN_004ed920(this,iVar3,(int)pcVar5);
      _local_8 = CONCAT31(uStack_7,bVar2);
      if (local_11 == '\0') {
        uVar4 = FUN_00559576((void *)(uint)bVar2,(uint)bVar2);
        bVar2 = (byte)uVar4;
        if ((0x1f < bVar2) && (bVar2 < 0x7f)) {
          if (-*(int *)(param_1 + 0x1c) - 1U < 2) {
            FUN_0054b1b4();
          }
          uVar4 = *(int *)(param_1 + 0x1c) + 1;
          if (0xfffffffd < uVar4) {
            FUN_0054b1b4();
          }
          iVar3 = *(int *)(param_1 + 0x18);
          if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
            if (uVar4 != 0) {
              if (*(uint *)(param_1 + 0x20) < uVar4) goto LAB_00471320;
              goto LAB_00471328;
            }
            if (iVar3 != 0) {
              FUN_004029e0((void *)(param_1 + 0x14),0);
            }
          }
          else if (uVar4 == 0) {
            *(char *)(iVar3 + -1) = cVar1 + -1;
            *(undefined4 *)(param_1 + 0x18) = 0;
            *(undefined4 *)(param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 0x20) = 0;
          }
          else {
LAB_00471320:
            FUN_00402b20(uVar4);
LAB_00471328:
            *(byte *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)) = bVar2;
            *(uint *)(param_1 + 0x1c) = uVar4;
            *(undefined1 *)(uVar4 + *(int *)(param_1 + 0x18)) = 0;
          }
        }
      }
      local_10 = local_10 + 1;
      param_1 = local_c;
    } while (local_10 < local_4);
  }
  return;
}


