//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSPanel, NSView, NSViewController;

@interface NSSpellChecker : NSObject
{
    id _guessesBrowser;
    id _wordField;
    id _languagePopUp;
    id _reserved1;
    id _panel;
    id _reserved2;
    id _correctButton;
    id _guessButton;
    id _ignoreButton;
    id _reserved3;
    id _languagesBrowser;
    id _quotesBrowser;
    id _replacementsBrowser;
    id _defineButton;
    struct __scFlags {
        unsigned int autoShowGuesses:1;
        unsigned int needDelayedGuess:1;
        unsigned int unignoreInProgress:1;
        unsigned int wordFieldEdited:1;
        unsigned int inSpelling:1;
        unsigned int reconnectSpelling:1;
        unsigned int inGrammar:1;
        unsigned int reconnectGrammar:1;
        unsigned int languageIdentification:1;
        unsigned int languagesHidden:1;
        unsigned int quotesByLanguage:1;
        unsigned int _reserved:21;
    } _scFlags;
    id _substitutionsPanel;
    id _reserved4;
    id _learnButton;
    id _infoField;
    id _grammarControl;
}

+ (id)_keyEventData;
+ (void)_recordKeyEvent:(id)arg1;
+ (BOOL)isAutomaticDashSubstitutionEnabled;
+ (BOOL)isAutomaticQuoteSubstitutionEnabled;
+ (BOOL)isAutomaticSpellingCorrectionEnabled;
+ (BOOL)isAutomaticTextReplacementEnabled;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)sharedSpellCheckerExists;
+ (id)sharedSpellChecker;
+ (long long)uniqueSpellDocumentTag;
+ (void)_startLoadOfScanner:(id)arg1;
- (void)_setTestCorrectionDictionary:(id)arg1;
- (void)setAutomaticDashSubstitutionEnabled:(BOOL)arg1;
- (BOOL)isAutomaticDashSubstitutionEnabled;
- (void)setAutomaticQuoteSubstitutionEnabled:(BOOL)arg1;
- (BOOL)isAutomaticQuoteSubstitutionEnabled;
- (void)setAutomaticSpellingCorrectionEnabled:(BOOL)arg1;
- (BOOL)isAutomaticSpellingCorrectionEnabled;
- (void)setAutomaticTextReplacementEnabled:(BOOL)arg1;
- (BOOL)isAutomaticTextReplacementEnabled;
- (void)dismissAuxiliaryWindows;
- (id)correctionIndicatorForView:(id)arg1;
- (void)makeCorrectionBubbleKeyForView:(id)arg1;
- (void)cancelCorrectionBubbleForView:(id)arg1;
- (void)dismissCorrectionBubbleForView:(id)arg1;
- (void)dismissCorrectionIndicatorForView:(id)arg1;
- (void)dismissCorrectionWithTag:(long long)arg1 andAccept:(BOOL)arg2;
- (void)dismissCorrection:(long long)arg1 acceptCorrection:(BOOL)arg2;
- (long long)showCorrection:(id)arg1 forStringInRect:(struct CGRect)arg2 view:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showCorrectionBubbleOfType:(long long)arg1 primaryString:(id)arg2 alternativeStrings:(id)arg3 forStringInRect:(struct CGRect)arg4 view:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)showCorrectionIndicatorOfType:(long long)arg1 primaryString:(id)arg2 alternativeStrings:(id)arg3 forStringInRect:(struct CGRect)arg4 view:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)languageForWordRange:(struct _NSRange)arg1 inString:(id)arg2 orthography:(id)arg3;
- (long long)requestCheckingOfString:(id)arg1 range:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 inSpellDocumentWithTag:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)menuForResult:(id)arg1 string:(id)arg2 options:(id)arg3 atLocation:(struct CGPoint)arg4 inView:(id)arg5;
- (Class)_dataDetectorActionContextClass;
- (id)_dataDetectorsActionsManager;
- (Class)_dataDetectorActionsManagerClass;
- (id)_legacyUserReplacementsDictionary;
- (id)defaultEmojiReplacementsDictionary;
- (void)setAdditionalTextReplacementsDictionary:(id)arg1;
@property(readonly, copy) NSDictionary *userReplacementsDictionary;
- (void)_replacementPreferencesChanged;
- (void)_resetReplacementPreferences;
- (void)_replacementPreferencesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_reallyResetReplacementPreferences;
- (void)_writeReplacementPreferences;
- (void)_quotesPreferencesChanged;
- (id)userQuotesArrayForLanguage:(id)arg1;
- (void)_changeQuotes:(id)arg1;
- (void)_changeSubstitutions:(id)arg1;
- (void)checkTextInSelection:(id)arg1;
- (void)checkTextInDocument:(id)arg1;
- (void)_updateSubstitutions;
- (void)_updateSingleQuotes:(id)arg1 doubleQuotes:(id)arg2 useByLanguage:(id)arg3;
@property(retain) NSViewController *substitutionsPanelAccessoryViewController;
@property(readonly) NSPanel *substitutionsPanel;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)updateSpellingPanelWithGrammarString:(id)arg1 detail:(id)arg2;
- (void)updateSpellingPanelWithMisspelledWordRange:(struct _NSRange)arg1 inString:(id)arg2;
- (void)updateSpellingPanelWithMisspelledWord:(id)arg1;
- (id)nextLetterDictionariesForPartialWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3 inSpellDocumentWithTag:(long long)arg4;
- (id)completionDictionariesForPartialWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3 inSpellDocumentWithTag:(long long)arg4;
- (id)completionsForPartialWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3 inSpellDocumentWithTag:(long long)arg4;
- (id)checkString:(id)arg1 range:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 inSpellDocumentWithTag:(long long)arg5 orthography:(id *)arg6 wordCount:(long long *)arg7;
- (void)_checkSpellingAndGrammarInString:(id)arg1 range:(struct _NSRange)arg2 enclosingRange:(struct _NSRange)arg3 offset:(unsigned long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7 inSpellDocumentWithTag:(long long)arg8 mutableResults:(id)arg9 wordCount:(long long *)arg10;
- (void)recordResponse:(long long)arg1 toCorrection:(id)arg2 forWord:(id)arg3 language:(id)arg4 inSpellDocumentWithTag:(long long)arg5;
- (id)correctionForWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3 inSpellDocumentWithTag:(long long)arg4;
- (long long)countWordsInString:(id)arg1 language:(id)arg2;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 inSpellDocumentWithTag:(long long)arg5 wordCount:(long long *)arg6;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 inSpellDocumentWithTag:(long long)arg5 wordCount:(long long *)arg6 reconnectOnError:(BOOL)arg7;
- (struct _NSRange)_checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 inSpellDocumentWithTag:(long long)arg5 wordCount:(long long *)arg6 reconnectOnError:(BOOL)arg7;
- (struct _NSRange)checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 inSpellDocumentWithTag:(long long)arg5 details:(id *)arg6;
- (struct _NSRange)checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 inSpellDocumentWithTag:(long long)arg5 details:(id *)arg6 reconnectOnError:(BOOL)arg7;
- (struct _NSRange)_checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 inSpellDocumentWithTag:(long long)arg5 details:(id *)arg6 reconnectOnError:(BOOL)arg7;
- (struct _NSRange)_chunkAndFindMisspelledWordInString:(id)arg1 language:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(long long *)arg4 usingSpellServer:(id)arg5;
- (struct _NSRange)_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingSpellServer:(id)arg3 details:(id *)arg4;
- (long long)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(long long)arg2;
- (void)_findNext:(id)arg1;
- (void)_languagePreferencesChanged:(BOOL)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelSheet:(id)arg1;
- (void)confirmSheet:(id)arg1;
- (void)_configureLanguages:(id)arg1;
- (void)_changeLanguage:(id)arg1;
- (void)_changeLanguageFromMenu:(id)arg1;
- (void)_openSystemPreferences:(id)arg1;
- (BOOL)_shouldWriteLanguageSettingsToDefaults;
- (void)windowDidBecomeKey:(id)arg1;
- (void)_windowDidBecomeVisible:(id)arg1;
- (void)_doUpdate:(id)arg1;
- (void)updatePanels;
- (void)_guess:(id)arg1;
- (void)_setGuesses:(id)arg1;
- (id)alternativesForPinyinInputString:(id)arg1 inSpellDocumentWithTag:(long long)arg2;
- (id)stringForInputString:(id)arg1 language:(id)arg2 inSpellDocumentWithTag:(long long)arg3;
- (id)guessesForWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3 inSpellDocumentWithTag:(long long)arg4;
- (id)guessesForWord:(id)arg1;
- (void)_setSelectionString:(id)arg1;
- (void)_setLastGuess:(id)arg1;
- (void)_defineFromMenu:(id)arg1;
- (void)_define:(id)arg1;
- (void)_copyFromMenu:(id)arg1;
- (void)_removeReplacement:(id)arg1;
- (void)_addReplacement:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 canDragRowsWithIndexes:(id)arg2 atPoint:(struct CGPoint)arg3;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_setSingleQuotes:(id)arg1 doubleQuotes:(id)arg2 useByLanguage:(id)arg3 quotesBrowser:(id)arg4 replacementsBrowser:(id)arg5 addReplacement:(id)arg6 removeReplacement:(id)arg7;
- (void)_setSingleQuotes:(id)arg1 doubleQuotes:(id)arg2;
- (void)_correct:(id)arg1;
- (void)_reallyChooseGuess:(id)arg1;
- (void)_chooseGuess:(id)arg1;
- (void)closeSpellDocumentWithTag:(long long)arg1;
- (void)setIgnoredWords:(id)arg1 inSpellDocumentWithTag:(long long)arg2;
- (id)ignoredWordsInSpellDocumentWithTag:(long long)arg1;
- (BOOL)hasLearnedWord:(id)arg1;
- (void)unlearnWord:(id)arg1;
- (void)forgetWord:(id)arg1;
- (void)forgetWord:(id)arg1 language:(id)arg2;
- (void)learnWord:(id)arg1;
- (void)learnWord:(id)arg1 language:(id)arg2;
- (id)_nonIgnoredGrammarCheckingResultForResult:(id)arg1 stringToCheck:(id)arg2 offset:(unsigned long long)arg3 inSpellDocumentWithTag:(long long)arg4;
- (id)_nonIgnoredDetailsForGrammarString:(id)arg1 details:(id)arg2 inSpellDocumentWithTag:(long long)arg3;
- (void)ignoreWord:(id)arg1 inSpellDocumentWithTag:(long long)arg2;
- (void)_ignore:(id)arg1;
- (void)_forget:(id)arg1;
- (void)_learn:(id)arg1;
- (id)_learnOrForgetOrInvalidate:(long long)arg1 word:(id)arg2 dictionary:(id)arg3 language:(id)arg4 ephemeral:(long long)arg5;
- (void)_normalizeUserDictionary:(id)arg1;
- (void)_preflightTextCheckingForTypes:(unsigned long long)arg1;
- (void)_preflightChosenSpellServer;
- (id)_chosenSpellServer:(BOOL)arg1 launchIfNecessary:(BOOL)arg2;
- (BOOL)_launchSpellChecker:(long long)arg1 error:(id *)arg2;
- (long long)_tagForSelectedItem;
- (id)_titleForSelectedItem;
- (id)_spellServers;
@property(retain) NSView *accessoryView;
- (id)_viewAboveAccessoryView;
@property(readonly) NSPanel *spellingPanel;
- (BOOL)windowIsSpellingPanel:(id)arg1;
- (void)setWordFieldStringValue:(id)arg1;
- (void)_changeGrammar:(id)arg1;
- (void)updateGrammar:(id)arg1;
- (void)_updateGrammar;
- (void)_activateControl:(id)arg1 forResponder:(id)arg2 setSelector:(SEL)arg3 toggleSelector:(SEL)arg4;
- (void)_updateControl:(id)arg1 forResponder:(id)arg2 getSelector:(SEL)arg3 setSelector:(SEL)arg4 toggleSelector:(SEL)arg5;
- (id)_responder;
@property BOOL automaticallyIdentifiesLanguages;
@property(readonly, copy) NSArray *userPreferredLanguages;
@property(readonly, copy) NSArray *availableLanguages;
- (id)guessLanguage;
- (BOOL)setGuessLanguage:(id)arg1;
- (id)language;
- (BOOL)setLanguage:(id)arg1;
- (BOOL)_setLanguage:(id)arg1;
- (long long)_indexOfPopupItemForLanguage:(id)arg1;
- (long long)_indexOfItemInPopUp:(id)arg1 forLanguage:(id)arg2;
- (long long)_indexOfItemInArray:(id)arg1 forLanguage:(id)arg2;
- (void)awakeFromNib;
- (void)setupGuessesBrowser;
- (void)window:(id)arg1 didDecodeRestorableState:(id)arg2;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)_initUI;
- (void)_showLanguagePopUp;
- (void)_hideLanguagePopUp;
- (id)languageMenu;
- (void)_fillLanguagePopUp:(id)arg1;
- (BOOL)_inSetupAssistant;
- (BOOL)_inSystemPreferences;
- (id)init;
- (void)_initializeLanguagesArraysAlreadyLockedFromLanguages:(id)arg1 baseLanguages:(id)arg2 multilingualIndex:(unsigned long long)arg3 japaneseIndex:(unsigned long long)arg4;
- (BOOL)_usePerAppLanguageIdentification;
- (BOOL)_fillSpellCheckerPopupButton:(id)arg1;
- (id)_defaultServerURL;
- (void)_setPreferredOrthographyIndexes;
- (void)_setDocumentDictionaryName:(id)arg1;
- (void)_setLanguageDictionaryName:(id)arg1;
- (id)_nameOfDictionaryForDocumentTag:(long long)arg1;
- (void)_deleteDictionaries:(id)arg1;
- (void)_openDictionaries:(id)arg1;
- (void)_changeDictionaries:(id)arg1;
- (void)_newDictionary:(id)arg1;

@end

