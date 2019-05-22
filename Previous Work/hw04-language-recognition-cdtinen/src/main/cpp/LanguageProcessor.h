/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file   LanguageProcessor.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  Language processor interface.
 */

#ifndef CSC232_HW04_LANGUAGE_RECOGNITION_LANGUAGE_PROCESSOR_H
#define CSC232_HW04_LANGUAGE_RECOGNITION_LANGUAGE_PROCESSOR_H

#include <string>

namespace csc232 {

    class LanguageProcessor {
    public:
        virtual bool isValid(const std::string &word) const = 0;

        virtual ~LanguageProcessor() = default;
    };

}

#endif // CSC232_HW04_LANGUAGE_RECOGNITION_LANGUAGE_PROCESSOR_H
