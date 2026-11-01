
/* ==== FUN_004925dc @ 004925dc ==== 
 * signature: uint __register FUN_004925dc(int param_1)
 * body: 004925dc-00492643
 */

uint FUN_004925dc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  uVar1 = 0;
  local_8 = 0;
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 1;
    if (SCARRY4(iVar4,1)) {
      uVar1 = thunk_FUN_00402808(uVar1);
    }
    if (iVar3 < 7) {
      do {
        uVar2 = FUN_004a6a80(*(int *)(param_1 + 0x338),iVar3);
        uVar1 = FUN_004a6a80(*(int *)(param_1 + 0x338),iVar4);
        if (uVar2 == uVar1) {
          uVar1 = FUN_004a6a80(*(int *)(param_1 + 0x338),iVar4);
          local_8 = uVar1;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 7);
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 6) {
      return local_8;
    }
  } while( true );
}


