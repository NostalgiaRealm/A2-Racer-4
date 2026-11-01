
/* ==== FUN_00441968 @ 00441968 ==== 
 * signature: undefined __register FUN_00441968(undefined4 * param_1, int * param_2)
 * body: 00441968-004419fd
 */

void FUN_00441968(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  FUN_00403cb0(param_2,param_1);
  iVar3 = 1;
  do {
    iVar2 = FUN_00403edc(*param_2);
    if (iVar2 < iVar3) {
      return;
    }
    bVar1 = *(byte *)(*param_2 + -1 + iVar3);
    if (((byte)PTR_DAT_004aba04[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
      if (bVar1 == 0x26) {
        if ((PTR_DAT_004aba14[8] != '\0') && (1 < iVar3)) {
          iVar2 = FUN_00403edc(*param_2);
          if ((1 < iVar2 - iVar3) &&
             ((*(char *)(*param_2 + -2 + iVar3) == '(' && (*(char *)(*param_2 + 1 + iVar3) == ')')))
             ) {
            FUN_00404124(param_2,iVar3 + -1,4);
            goto LAB_004419ef;
          }
        }
        FUN_00404124(param_2,iVar3,1);
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
LAB_004419ef:
    iVar3 = iVar3 + 1;
  } while( true );
}


