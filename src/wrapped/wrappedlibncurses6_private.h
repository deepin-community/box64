#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

GO(COLOR_PAIR, iFi)
GO(PAIR_NUMBER, iFi)
GO(_traceattr, pFu)
GO(_traceattr2, pFiu)
GO(_tracecchar_t, pFp)
GO(_tracecchar_t2, pFip)
GO(_tracechar, pFi)
GO(_tracechtype, pFu)
GO(_tracechtype2, pFiu)
//GO(_tracef, vFpV)
GO(add_wch, iFp)
GO(add_wchnstr, iFpi)
GO(add_wchstr, iFp)
GO(addch, iFu)
GO(addchnstr, iFpi)
GO(addchstr, iFp)
GO(addnstr, iFpi)
GO(addnwstr, iFpi)
GO(addstr, iFp)
GO(addwstr, iFp)
GO(alloc_pair, iFii)
GO(alloc_pair_sp, iFpii)
GO(assume_default_colors, iFii)
GO(assume_default_colors_sp, iFpii)
GO(attr_get, iFppp)
GO(attr_off, iFup)
GO(attr_on, iFup)
GO(attr_set, iFuwp)
GO(attroff, iFi)
GO(attron, iFi)
GO(attrset, iFi)
GO(beep, iFv)
GO(beep_sp, iFp)
GO(bkgd, iFu)
GO(bkgdset, vFu)
GO(bkgrnd, iFp)
GO(bkgrndset, vFp)
GO(border, iFuuuuuuuu)
GO(border_set, iFpppppppp)
GO(box, iFpuu)
GO(box_set, iFppp)
GO(can_change_color, iFv)
GO(can_change_color_sp, iFp)
GO(chgat, iFiuwp)
GO(clear, iFv)
GO(clearok, iFpi)
GO(clrtobot, iFv)
GO(clrtoeol, iFv)
GO(color_content, iFwppp)
GO(color_content_sp, iFpwppp)
GO(color_set, iFwp)
GO(copywin, iFppiiiiiii)
GO(curses_trace, uFu)
GO(delch, iFv)
GO(deleteln, iFv)
GO(delscreen, vFp)
GO(delwin, iFp)
GO(derwin, pFpiiii)
GO(doupdate, iFv)
GO(doupdate_sp, iFp)
GO(dupwin, pFp)
GO(echo, iFv)
GO(echo_sp, iFp)
GO(echo_wchar, iFp)
GO(echochar, iFu)
GO(endwin, iFv)
GO(endwin_sp, iFp)
GO(erase, iFv)
GO(erasewchar, iFp)
GO(exit_curses, vFi)
GO(extended_color_content, iFippp)
GO(extended_color_content_sp, iFpippp)
GO(extended_pair_content, iFipp)
GO(extended_pair_content_sp, iFpipp)
GO(extended_slk_color, iFi)
GO(extended_slk_color_sp, iFpi)
GO(filter, vFv)
GO(filter_sp, vFp)
GO(find_pair, iFii)
GO(find_pair_sp, iFpii)
GO(flash, iFv)
GO(flash_sp, iFp)
GO(free_pair, iFi)
GO(free_pair_sp, iFpi)
GO(get_escdelay, iFv)
GO(get_escdelay_sp, iFp)
GO(get_wch, iFp)
GO(get_wstr, iFp)
GO(getattrs, iFp)
GO(getbegx, iFp)
GO(getbegy, iFp)
GO(getbkgd, uFp)
GO(getbkgrnd, iFp)
GO(getcchar, iFppppp)
GO(getch, iFv)
GO(getcurx, iFp)
GO(getcury, iFp)
GO(getmaxx, iFp)
GO(getmaxy, iFp)
GO(getmouse, iFp)
GO(getmouse_sp, iFpp)
GO(getn_wstr, iFpi)
GO(getnstr, iFpi)
GO(getparx, iFp)
GO(getpary, iFp)
GO(getstr, iFp)
GO(getwin, pFp)
GO(getwin_sp, pFpp)
GO(has_colors, iFv)
GO(has_colors_sp, iFp)
GO(has_mouse, iFv)
GO(has_mouse_sp, iFp)
GO(hline, iFui)
GO(hline_set, iFpi)
GO(immedok, vFpi)
GO(in_wch, iFp)
GO(in_wchnstr, iFpi)
GO(in_wchstr, iFp)
GO(inch, uFv)
GO(inchnstr, iFpi)
GO(inchstr, iFp)
GO(init_color, iFwwww)
GO(init_color_sp, iFpwwww)
GO(init_extended_color, iFiiii)
GO(init_extended_color_sp, iFpiiii)
GO(init_extended_pair, iFiii)
GO(init_extended_pair_sp, iFpiii)
GO(init_pair, iFwww)
GO(init_pair_sp, iFpwww)
GOM(initscr, pFv)
GO(innstr, iFpi)
GO(innwstr, iFpi)
GO(ins_nwstr, iFpi)
GO(ins_wch, iFp)
GO(ins_wstr, iFp)
GO(insch, iFu)
GO(insdelln, iFi)
GO(insertln, iFv)
GO(insnstr, iFpi)
GO(insstr, iFp)
GO(instr, iFp)
GO(inwstr, iFp)
GO(is_cleared, iFp)
GO(is_idcok, iFp)
GO(is_idlok, iFp)
GO(is_immedok, iFp)
GO(is_keypad, iFp)
GO(is_leaveok, iFp)
GO(is_linetouched, iFpi)
GO(is_nodelay, iFp)
GO(is_notimeout, iFp)
GO(is_pad, iFp)
GO(is_scrollok, iFp)
GO(is_subwin, iFp)
GO(is_syncok, iFp)
GO(is_term_resized, iFii)
GO(is_term_resized_sp, iFpii)
GO(is_wintouched, iFp)
GO(isendwin, iFv)
GO(isendwin_sp, iFp)
GO(key_name, pFi)
GO(killwchar, iFp)
GO(leaveok, iFpi)
GO(mcprint, iFpi)
GO(mcprint_sp, iFppi)
GO(mouse_trafo, iFppi)
GO(mouseinterval, iFi)
GO(mouseinterval_sp, iFpi)
GO(mousemask, uFup)
GO(mousemask_sp, uFpup)
GO(move, iFii)
GO(mvadd_wch, iFiip)
GO(mvadd_wchnstr, iFiipi)
GO(mvadd_wchstr, iFiip)
GO(mvaddch, iFiiu)
GO(mvaddchnstr, iFiipi)
GO(mvaddchstr, iFiip)
GO(mvaddnstr, iFiipi)
GO(mvaddnwstr, iFiipi)
GO(mvaddstr, iFiip)
GO(mvaddwstr, iFiip)
GO(mvchgat, iFiiiuwp)
GO(mvcur, iFiiii)
GO(mvcur_sp, iFpiiii)
GO(mvdelch, iFii)
GO(mvderwin, iFpii)
GO(mvget_wch, iFiip)
GO(mvget_wstr, iFiip)
GO(mvgetch, iFii)
GO(mvgetn_wstr, iFiipi)
GO(mvgetnstr, iFiipi)
GO(mvgetstr, iFiip)
GO(mvhline, iFiiui)
GO(mvhline_set, iFiipi)
GO(mvin_wch, iFiip)
GO(mvin_wchnstr, iFiipi)
GO(mvin_wchstr, iFiip)
GO(mvinch, uFii)
GO(mvinchnstr, iFiipi)
GO(mvinchstr, iFiip)
GO(mvinnstr, iFiipi)
GO(mvinnwstr, iFiipi)
GO(mvins_nwstr, iFiipi)
GO(mvins_wch, iFiip)
GO(mvins_wstr, iFiip)
GO(mvinsch, iFiiu)
GO(mvinsnstr, iFiipi)
GO(mvinsstr, iFiip)
GO(mvinstr, iFiip)
GO(mvinwstr, iFiip)
GOM(mvprintw, iFEiipV)
//GO(mvscanw, iFiipV)
GO(mvvline, iFiiui)
GO(mvvline_set, iFiipi)
GO(mvwadd_wch, iFpiip)
GO(mvwadd_wchnstr, iFpiipi)
GO(mvwadd_wchstr, iFpiip)
GO(mvwaddch, iFpiiu)
GO(mvwaddchnstr, iFpiipi)
GO(mvwaddchstr, iFpiip)
GO(mvwaddnstr, iFpiipi)
GO(mvwaddnwstr, iFpiipi)
GO(mvwaddstr, iFpiip)
GO(mvwaddwstr, iFpiip)
GO(mvwchgat, iFpiiiuwp)
GO(mvwdelch, iFpii)
GO(mvwget_wch, iFpiip)
GO(mvwget_wstr, iFpiip)
GO(mvwgetch, iFpii)
GO(mvwgetn_wstr, iFpiipi)
GO(mvwgetnstr, iFpiipi)
GO(mvwgetstr, iFpiip)
GO(mvwhline, iFpiiui)
GO(mvwhline_set, iFpiipi)
GO(mvwin, iFpii)
GO(mvwin_wch, iFpiip)
GO(mvwin_wchnstr, iFpiipi)
GO(mvwin_wchstr, iFpiip)
GO(mvwinch, uFpii)
GO(mvwinchnstr, iFpiipi)
GO(mvwinchstr, iFpiip)
GO(mvwinnstr, iFpiipi)
GO(mvwinnwstr, iFpiipi)
GO(mvwins_nwstr, iFpiipi)
GO(mvwins_wch, iFpiip)
GO(mvwins_wstr, iFpiip)
GO(mvwinsch, iFpiiu)
GO(mvwinsnstr, iFpiipi)
GO(mvwinsstr, iFpiip)
GO(mvwinstr, iFpiip)
GO(mvwinwstr, iFpiip)
GOM(mvwprintw, iFEpiipV)
//GO(mvwscanw, iFpiipV)
GO(mvwvline, iFpiiui)
GO(mvwvline_set, iFpiipi)
GO(new_prescr, pFv)
GO(newpad, pFii)
GO(newpad_sp, pFpii)
GO(newterm, pFppp)
GO(newterm_sp, pFpppp)
GO(newwin, pFiiii)
GO(newwin_sp, pFpiiii)
GO(nl, iFv)
GO(nl_sp, iFp)
GO(noecho, iFv)
GO(noecho_sp, iFp)
GO(nofilter, vFv)
GO(nofilter_sp, vFp)
GO(nonl, iFv)
GO(nonl_sp, iFp)
GO(overlay, iFpp)
GO(overwrite, iFpp)
GO(pair_content, iFwpp)
GO(pair_content_sp, iFpwpp)
GO(pecho_wchar, iFpp)
GO(pechochar, iFpu)
GO(pnoutrefresh, iFpiiiiii)
GO(prefresh, iFpiiiiii)
GOM(printw, iFEpV)
GO(putwin, iFpp)
GO(redrawwin, iFp)
GO(refresh, iFv)
GO(reset_color_pairs, vFv)
GO(reset_color_pairs_sp, vFp)
GO(resize_term, iFii)
GO(resize_term_sp, iFpii)
GO(resizeterm, iFii)
GO(resizeterm_sp, iFpii)
//GO(ripoffline, iFi@)
//GO(ripoffline_sp, iFpi@)
//GO(scanw, iFpV)
GO(scr_dump, iFp)
GO(scr_init, iFp)
GO(scr_init_sp, iFpp)
GO(scr_restore, iFp)
GO(scr_restore_sp, iFpp)
GO(scr_set, iFp)
GO(scr_set_sp, iFpp)
GO(scrl, iFi)
GO(scroll, iFp)
GO(scrollok, iFpi)
GO(set_escdelay, iFi)
GO(set_escdelay_sp, iFpi)
GO(set_term, pFp)
GO(setcchar, iFppuwp)
GO(setscrreg, iFii)
GO(slk_attr, uFv)
GO(slk_attr_off, iFup)
GO(slk_attr_on, iFup)
GO(slk_attr_set, iFuwp)
GO(slk_attr_set_sp, iFpuwp)
GO(slk_attr_sp, uFp)
GO(slk_attroff, iFu)
GO(slk_attroff_sp, iFpu)
GO(slk_attron, iFu)
GO(slk_attron_sp, iFpu)
GO(slk_attrset, iFu)
GO(slk_attrset_sp, iFpu)
GO(slk_clear, iFv)
GO(slk_clear_sp, iFp)
GO(slk_color, iFw)
GO(slk_color_sp, iFpw)
GO(slk_init, iFi)
GO(slk_init_sp, iFpi)
GO(slk_label, pFi)
GO(slk_label_sp, pFpi)
GO(slk_noutrefresh, iFv)
GO(slk_noutrefresh_sp, iFp)
GO(slk_refresh, iFv)
GO(slk_refresh_sp, iFp)
GO(slk_restore, iFv)
GO(slk_restore_sp, iFp)
GO(slk_set, iFipi)
GO(slk_set_sp, iFpipi)
GO(slk_touch, iFv)
GO(slk_touch_sp, iFp)
GO(slk_wset, iFipi)
GO(standend, iFv)
GO(standout, iFv)
GO(start_color, iFv)
GO(start_color_sp, iFp)
GO(subpad, pFpiiii)
GO(subwin, pFpiiii)
GO(syncok, iFpi)
GO(term_attrs, uFv)
GO(term_attrs_sp, uFp)
GO(termattrs, uFv)
GO(termattrs_sp, uFp)
GO(timeout, vFi)
GO(touchline, iFpii)
GO(touchwin, iFp)
GO(trace, vFu)
GO(unget_wch, iFi)
GO(unget_wch_sp, iFpi)
GO(ungetch, iFi)
GO(ungetch_sp, iFpi)
GO(ungetmouse, iFp)
GO(ungetmouse_sp, iFpp)
GO(untouchwin, iFp)
GO(use_default_colors, iFv)
GO(use_default_colors_sp, iFp)
GO(use_legacy_coding, iFi)
GO(use_legacy_coding_sp, iFpi)
//GO(use_screen, iFp@p)
GO(use_tioctl, vFi)
GO(use_tioctl_sp, vFpi)
//GO(use_window, iFp@p)
GO(vid_attr, iFuwp)
GO(vid_attr_sp, iFpuwp)
//GO(vid_puts, iFuwp@)
//GO(vid_puts_sp, iFpuwp@)
GO(vidattr, iFu)
GO(vidattr_sp, iFpu)
//GO(vidputs, iFu@)
//GO(vidputs_sp, iFpu@)
GO(vline, iFui)
GO(vline_set, iFpi)
//GO(vw_printw, iFppA)
//GO(vw_scanw, iFppA)
GOM(vwprintw, iFEppA)
//GO(vwscanw, iFppA)
GO(wadd_wch, iFpp)
GO(wadd_wchnstr, iFppi)
GO(wadd_wchstr, iFpp)
GO(waddch, iFpu)
GO(waddchnstr, iFppi)
GO(waddchstr, iFpp)
GO(waddnstr, iFppi)
GO(waddnwstr, iFppi)
GO(waddstr, iFpp)
GO(waddwstr, iFpp)
GO(wattr_get, iFpppp)
GO(wattr_off, iFpup)
GO(wattr_on, iFpup)
GO(wattr_set, iFpuwp)
GO(wattroff, iFpi)
GO(wattron, iFpi)
GO(wattrset, iFpi)
GO(wbkgd, iFpu)
GO(wbkgdset, vFpu)
GO(wbkgrnd, iFpp)
GO(wbkgrndset, vFpp)
GO(wborder, iFpuuuuuuuu)
GO(wborder_set, iFppppppppp)
GO(wchgat, iFpiuwp)
GO(wclear, iFp)
GO(wclrtobot, iFp)
GO(wclrtoeol, iFp)
GO(wcolor_set, iFpwp)
GO(wcursyncup, vFp)
GO(wdelch, iFp)
GO(wdeleteln, iFp)
GO(wecho_wchar, iFpp)
GO(wechochar, iFpu)
GO(wenclose, iFpii)
GO(werase, iFp)
GO(wget_wch, iFpp)
GO(wget_wstr, iFpp)
GO(wgetbkgrnd, iFpp)
GO(wgetch, iFp)
GO(wgetch_events, iFpp) // Experimental (absent on some builds)
GO(wgetdelay, iFp)
GO(wgetn_wstr, iFppi)
GO(wgetnstr, iFppi)
GO(wgetnstr_events, iFppip)
GO(wgetparent, pFp)
GO(wgetscrreg, iFppp)
GO(wgetstr, iFpp)
GO(whline, iFpui)
GO(whline_set, iFppi)
GO(win_wch, iFpp)
GO(win_wchnstr, iFppi)
GO(win_wchstr, iFpp)
GO(winch, uFp)
GO(winchnstr, iFppi)
GO(winchstr, iFpp)
GO(winnstr, iFppi)
GO(winnwstr, iFppi)
GO(wins_nwstr, iFppi)
GO(wins_wch, iFpp)
GO(wins_wstr, iFpp)
GO(winsch, iFpu)
GO(winsdelln, iFpi)
GO(winsertln, iFp)
GO(winsnstr, iFppi)
GO(winsstr, iFpp)
GO(winstr, iFpp)
GO(winwstr, iFpp)
GO(wmouse_trafo, iFpppi)
GO(wmove, iFpii)
GO(wnoutrefresh, iFp)
GOM(wprintw, iFEppV)
GO(wredrawln, iFpii)
GO(wrefresh, iFp)
GO(wresize, iFpii)
//GO(wscanw, iFppV)
GO(wscrl, iFpi)
GO(wsetscrreg, iFpii)
GO(wstandend, iFp)
GO(wstandout, iFp)
GO(wsyncdown, vFp)
GO(wsyncup, vFp)
GO(wtouchln, iFpiii)
GO(wunctrl, pFp)
GO(wunctrl_sp, pFpp)
GO(wvline, iFpui)
GO(wvline_set, iFppi)

DATA(COLOR_PAIRS, sizeof(void*))
DATA(COLORS, sizeof(void*))
DATA(ESCDELAY, sizeof(void*))
DATA(_nc_wacs, sizeof(void*))
