
/* ==== FUN_00402b68 @ 00402b68 ==== 
 * signature: undefined __stdcall FUN_00402b68(void)
 * body: 00402b68-00402ba0
 */

void FUN_00402b68(void)

{
  if ((DAT_00407f98 == 1) || ((DAT_00407f98 == 0 && (DAT_00407214 == 1)))) {
    FUN_00402ba1(0xfc);
    if (DAT_004080a8 != (code *)0x0) {
      (*DAT_004080a8)();
    }
    FUN_00402ba1(0xff);
  }
  return;
}


