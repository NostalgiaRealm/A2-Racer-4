
/* ==== FUN_100041d0 @ 100041d0 ==== 
 * signature: undefined __cdecl FUN_100041d0(void * param_1, int param_2)
 * body: 100041d0-100045bb
 */

void __cdecl FUN_100041d0(void *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  void *this;
  void *this_00;
  
  if ((((DAT_1002fce0 & 4) != 0) && (iVar2 = FUN_100048b0(), iVar2 == 0)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x3e1,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_10030000)(3,param_1,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_10004d10((int)param_1);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_10003050(2,0x1002c4cc,0x3f3,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)param_1 + -0x20);
      if ((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
         && (((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2 &&
             ((*(int *)((int)param_1 + -0xc) != 3 &&
              (iVar2 = FUN_10003050(2,0x1002c4cc,0x3f9,0,
                                    (byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))
             ))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_1002fce0 & 4) == 0) {
        iVar2 = FUN_10004820((char *)((int)param_1 + -4),DAT_1002fcec,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10003050(1,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_10004820((char *)((int)param_1 + *(int *)((int)param_1 + -0x10)),DAT_1002fcec,4)
        ;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10003050(1,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)param_1 + -0xc) == 3) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar2 = FUN_10003050(2,0x1002c4cc,0x40e,0,
                                    (byte *)
                                    "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
              iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_1002fced,*(int *)((int)param_1 + -0x10) + 0x24);
        FUN_100097a0(this,_Dst);
      }
      else {
        if ((*(int *)((int)param_1 + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)param_1 + -0xc) != param_2) &&
           (iVar2 = FUN_10003050(2,0x1002c4cc,0x41b,0,(byte *)"pHead->nBlockUse == nBlockUse"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_10031440 = DAT_10031440 - *(int *)((int)param_1 + -0x10);
        if ((DAT_1002fce0 & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_10031434 != _Dst) &&
               (iVar2 = FUN_10003050(2,0x1002c4cc,0x42a,0,(byte *)"_pLastBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10031434 = *(int **)((int)param_1 + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)param_1 + -0x1c);
          }
          if (*(int *)((int)param_1 + -0x1c) == 0) {
            if ((DAT_1003143c != _Dst) &&
               (iVar2 = FUN_10003050(2,0x1002c4cc,0x434,0,(byte *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_1003143c = (int *)*_Dst;
          }
          else {
            **(int **)((int)param_1 + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_1002fced,*(int *)((int)param_1 + -0x10) + 0x24);
          FUN_100097a0(this_00,_Dst);
        }
        else {
          *(undefined4 *)((int)param_1 + -0xc) = 0;
          _memset(param_1,(uint)DAT_1002fced,*(size_t *)((int)param_1 + -0x10));
        }
      }
    }
  }
  return;
}


