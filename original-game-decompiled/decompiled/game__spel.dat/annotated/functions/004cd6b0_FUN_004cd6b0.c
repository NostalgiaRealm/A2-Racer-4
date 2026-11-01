
/* ==== FUN_004cd6b0 @ 004cd6b0 ==== 
 * signature: LRESULT __stdcall FUN_004cd6b0(HWND param_1, uint param_2, uint param_3, int param_4)
 * body: 004cd6b0-004cdb58
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_004cd6b0(HWND param_1,uint param_2,uint param_3,int param_4)

{
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  LRESULT LVar4;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  if (param_2 < 0x117) {
    if (param_2 == 0x116) {
      if (DAT_00740e40 != (code *)0x0) {
        param_2 = 0x116;
        pcVar3 = DAT_00740e40;
        goto LAB_004cd7c6;
      }
      goto switchD_004cd702_caseD_3;
    }
    if (param_2 < 0x21) {
      if (param_2 == 0x20) {
        if (((DAT_0074b2f4 == 0) || (iVar2 = FUN_004ce620(), iVar2 == 0)) ||
           (iVar2 = FUN_004ce5f0(), iVar2 == 2)) {
          SetCursor((HCURSOR)0x0);
        }
        if (DAT_00740e34 != (code *)0x0) {
          (*DAT_00740e34)(param_1,0x20,param_3,param_4);
          return 0;
        }
switchD_004cd702_caseD_14:
        return 1;
      }
      switch(param_2) {
      case 2:
        FUN_004c3fa0((byte *)s__s__d____DESTROY_MESSAGE_005b6718);
        PostQuitMessage(0);
        LVar4 = DefWindowProcA(param_1,param_2,param_3,param_4);
        return LVar4;
      default:
        goto switchD_004cd702_caseD_3;
      case 6:
        _DAT_00740df8 = param_3 >> 0x10;
        _DAT_00740df4 = param_3 & 0xffff;
        return 0;
      case 7:
        pcVar3 = DAT_00740e30;
        goto LAB_004cd9fc;
      case 8:
        pcVar3 = DAT_00740e2c;
        break;
      case 0xf:
        pcVar3 = DAT_00740e38;
        if (DAT_00740e38 == (code *)0x0) {
          BVar1 = GetUpdateRect(param_1,&local_50,0);
          if (BVar1 == 0) {
            return 0;
          }
          BeginPaint(param_1,&local_40);
          EndPaint(param_1,&local_40);
          return 0;
        }
        goto LAB_004cda0f;
      case 0x12:
        FUN_004c3fa0((byte *)s__s__d____QUIT_MESSAGE_005b6700);
        LVar4 = DefWindowProcA(param_1,param_2,param_3,param_4);
        return LVar4;
      case 0x14:
        goto switchD_004cd702_caseD_14;
      case 0x1c:
        _DAT_00740e00 = param_3 >> 0x10;
        DAT_00740dfc = param_3 & 0xffff;
        return 0;
      }
      goto LAB_004cd7b3;
    }
    switch(param_2) {
    case 0x2b:
      pcVar3 = DAT_00740e48;
      if (DAT_00740e48 != (code *)0x0) goto LAB_004cda0f;
      if (*(int *)(param_4 + 0x14) != DAT_007408a4) {
        LVar4 = FUN_004cee40(*(int *)(param_4 + 0x14),param_2,param_3,param_4);
        return LVar4;
      }
      goto switchD_004cd702_caseD_3;
    case 0x2c:
      pcVar3 = DAT_00740e4c;
      break;
    default:
      goto switchD_004cd702_caseD_3;
    case 0x100:
      pcVar3 = DAT_00740e3c;
      goto LAB_004cd9fc;
    case 0x102:
      pcVar3 = DAT_00740e0c;
      break;
    case 0x104:
      pcVar3 = DAT_00740e14;
      break;
    case 0x106:
      pcVar3 = DAT_00740e10;
      goto LAB_004cd9fc;
    case 0x111:
      pcVar3 = DAT_00740e08;
      goto LAB_004cd9fc;
    case 0x113:
      FUN_004ce4f0(param_3);
      LVar4 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return LVar4;
    }
    goto LAB_004cd7b3;
  }
  if (0x200 < param_2) {
    if (0x205 < param_2) {
      if (param_2 == 0x219) {
        FUN_004ced80(param_1,0x219,param_3,param_4);
      }
      else if (param_2 == 0x30f) {
        if (DAT_00740e54 != (code *)0x0) {
          param_2 = 0x30f;
          pcVar3 = DAT_00740e54;
          goto LAB_004cd7c6;
        }
      }
      else if ((param_2 == 0x311) && (DAT_00740e50 != (code *)0x0)) {
        param_2 = 0x311;
        pcVar3 = DAT_00740e50;
        goto LAB_004cda0f;
      }
      goto switchD_004cd702_caseD_3;
    }
    if (param_2 != 0x205) {
      if (param_2 != 0x201) {
        if (param_2 == 0x202) {
          if (DAT_00740e20 != (code *)0x0) {
            param_2 = 0x202;
            pcVar3 = DAT_00740e20;
            goto LAB_004cd7c6;
          }
        }
        else if ((param_2 == 0x204) && (DAT_00740e24 != (code *)0x0)) {
          param_2 = 0x204;
          pcVar3 = DAT_00740e24;
          goto LAB_004cda0f;
        }
        goto switchD_004cd702_caseD_3;
      }
      if (DAT_00740e1c == (code *)0x0) goto switchD_004cd702_caseD_3;
      param_2 = 0x201;
      pcVar3 = DAT_00740e1c;
      goto LAB_004cda0f;
    }
    if (DAT_00740e28 == (code *)0x0) goto switchD_004cd702_caseD_3;
    param_2 = 0x205;
    pcVar3 = DAT_00740e28;
    goto LAB_004cd7c6;
  }
  if (param_2 == 0x200) {
    if (DAT_00740e18 != (code *)0x0) {
      param_2 = 0x200;
      pcVar3 = DAT_00740e18;
      goto LAB_004cd7c6;
    }
    goto switchD_004cd702_caseD_3;
  }
  switch(param_2) {
  case 0x11f:
    pcVar3 = DAT_00740e44;
    goto LAB_004cd7b3;
  default:
    goto switchD_004cd702_caseD_3;
  case 0x132:
    pcVar3 = DAT_00740e68;
    break;
  case 0x133:
    pcVar3 = DAT_00740e60;
    break;
  case 0x134:
    pcVar3 = DAT_00740e64;
    goto LAB_004cd7b3;
  case 0x135:
    pcVar3 = DAT_00740e58;
    break;
  case 0x136:
    pcVar3 = DAT_00740e5c;
LAB_004cd7b3:
    if (pcVar3 != (code *)0x0) {
LAB_004cd7c6:
      (*pcVar3)(param_1,param_2,param_3,param_4);
      return 0;
    }
    goto switchD_004cd702_caseD_3;
  case 0x137:
    if (DAT_00740e6c != (code *)0x0) {
      (*DAT_00740e6c)(param_1,param_2,param_3,param_4);
      return 0;
    }
    goto switchD_004cd702_caseD_3;
  case 0x138:
    pcVar3 = DAT_00740e70;
  }
LAB_004cd9fc:
  if (pcVar3 != (code *)0x0) {
LAB_004cda0f:
    (*pcVar3)(param_1,param_2,param_3,param_4);
    return 0;
  }
switchD_004cd702_caseD_3:
  LVar4 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar4;
}


