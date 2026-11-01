
/* ==== FUN_004371cc @ 004371cc ==== 
 * signature: undefined __register FUN_004371cc(undefined4 * param_1, int * param_2)
 * body: 004371cc-00437261
 */

void FUN_004371cc(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  FUN_00403a0c(param_2,param_1);
  iVar3 = 1;
  do {
    iVar2 = FUN_00403c38(*param_2);
    if (iVar2 < iVar3) {
      return;
    }
    bVar1 = *(byte *)(*param_2 + -1 + iVar3);
    if (((byte)PTR_DAT_00446d90[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
      if (bVar1 == 0x26) {
        if ((PTR_DAT_00446da0[8] != '\0') && (1 < iVar3)) {
          iVar2 = FUN_00403c38(*param_2);
          if ((1 < iVar2 - iVar3) &&
             ((*(char *)(*param_2 + -2 + iVar3) == '(' && (*(char *)(*param_2 + 1 + iVar3) == ')')))
             ) {
            FUN_00403e80(param_2,iVar3 + -1,4);
            goto LAB_00437253;
          }
        }
        FUN_00403e80(param_2,iVar3,1);
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
LAB_00437253:
    iVar3 = iVar3 + 1;
  } while( true );
}


