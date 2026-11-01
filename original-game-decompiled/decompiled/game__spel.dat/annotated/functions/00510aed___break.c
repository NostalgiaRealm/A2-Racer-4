
/* ==== __break @ 00510aed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00510aed-00510aed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


